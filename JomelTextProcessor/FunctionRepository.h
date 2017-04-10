#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Diagnostics;


namespace JomelTextProcessor {

	/// <summary>
	/// Summary for FunctionRepository
	/// </summary>
	public ref class FunctionRepository :  public System::ComponentModel::Component
	{
	public:
		FunctionRepository(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		FunctionRepository(System::ComponentModel::IContainer ^container)
		{
			/// <summary>
			/// Required for Windows.Forms Class Composition Designer support
			/// </summary>

			container->Add(this);
			InitializeComponent();
		}
		
		//Name all functions here
		static String^ DecorateString(String^ foo); //Test function CJT 12.06.2016
		static void SqlTester(); //Test function for sql select 01.17.2017
		static String^ Quotation(bool singleQuote, bool doubleQuote);
		static void EmptyTextBoxError(String^ processText);
		static void ClearClipboard();
		static void SqlQueryExecute(String^ sqlQuery);
		static String^ ConnectionString();
		static System::Data::DataSet^ SQLCmdReturnDS(String^ sqlQuery);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FunctionRepository()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			components = gcnew System::ComponentModel::Container();
		}
#pragma endregion
	};
}
