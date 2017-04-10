#include "StdAfx.h"
#include "FunctionRepository.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Diagnostics;
using namespace System::IO;
using namespace System::Data::SqlClient;

namespace JomelTextProcessor {
	String^ FunctionRepository::DecorateString(String^ foo) {
		return gcnew String("*"+foo+"*");
	}
	
	String^ FunctionRepository::ConnectionString() {
		String^ strServer = "hera";
		String^ strCatalog = "PCIDB_Prod";
		String^ strConString = "Data Source=" + strServer + ";Initial Catalog=" + strCatalog + ";Persist Security Info=True;Connection Timeout=0;Integrated Security=SSPI";
		return strConString;
	}
	
	void FunctionRepository::SqlTester() {
		SqlConnection^ sqlConnection = gcnew SqlConnection();
		
		sqlConnection->ConnectionString = FunctionRepository::ConnectionString();
		sqlConnection->Open();

		SqlCommand^ sqlCommand = gcnew SqlCommand("Select top 2 MemberRowId,LName_tx, FName_tx from tbl_members");
		sqlCommand->Connection = sqlConnection;
		
		SqlDataReader^ dr = sqlCommand->ExecuteReader();
		while (dr->Read())
		{
			DataTable^ dt = gcnew DataTable();
			MessageBox::Show(dr["LName_tx"]->ToString() + ' ' + dr["FName_tx"]->ToString());
		}
		sqlConnection->Close();
	}
	
	void FunctionRepository::SqlQueryExecute(String^ sqlQuery) {
		
		try {
			SqlConnection^ sqlConnection = gcnew SqlConnection();
			
			sqlConnection->ConnectionString = FunctionRepository::ConnectionString();
			sqlConnection->Open();

			SqlCommand^ sqlCommand = gcnew SqlCommand(sqlQuery);
			sqlCommand->Connection = sqlConnection;
			
			sqlCommand->ExecuteNonQuery();
			sqlConnection->Close();
			
			MessageBox::Show("Query executed successfully");
		}
		catch(Exception^ e) {
			MessageBox::Show(e->ToString());
		}
	}
	
	
	String^ FunctionRepository::Quotation(bool singleQuote, bool doubleQuote) {
		String^ quotation = "";

		if (singleQuote == true)
			 return quotation = "'";

		else if (doubleQuote == true)
			 return quotation = "\"";

		else
			return "";
	}
	
	void FunctionRepository::EmptyTextBoxError(String^ processText) {
		if (processText == "") {
			 MessageBox::Show("Process text cannot be empty","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 return;
		}
	}
	
	void FunctionRepository::ClearClipboard() {
		System::Windows::Forms::Clipboard::Clear();
	}
	
	System::Data::DataSet^ FunctionRepository::SQLCmdReturnDS(String^ sqlQuery) {
			SqlConnection^ sqlConnection = gcnew SqlConnection();
		
			sqlConnection->ConnectionString = FunctionRepository::ConnectionString();
			sqlConnection->Open();

            SqlDataAdapter^ rsAdp = gcnew SqlDataAdapter();
            rsAdp->TableMappings->Add("Table", "Members");

            SqlCommand^ myCmd = gcnew SqlCommand(sqlQuery, sqlConnection);
            myCmd->CommandTimeout = 0;
            myCmd->CommandTimeout = 0;
            System::Data::DataSet^ rsDat = gcnew System::Data::DataSet("Members");
            rsAdp->SelectCommand = myCmd;
            rsAdp->Fill(rsDat);

			sqlConnection->Close();
	
	
		
			return rsDat;
	}
}