#pragma once
#include "FunctionRepository.h"


namespace JomelTextProcessor {

#pragma region namespaces
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::IO;
#pragma endregion

#pragma region VS Generated Code
	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtProcessText;
	protected: 
	private: System::Windows::Forms::TextBox^  txtPrefix;
	protected: 
	private: System::Windows::Forms::Label^  lblPrefix;
	private: System::Windows::Forms::Label^  lblSuffix;
	private: System::Windows::Forms::Button^  btnPrefixSuffix;
	private: System::Windows::Forms::TextBox^  txtSuffix;
	private: System::Windows::Forms::TextBox^  txtSeparator;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  rdbSingleQuote;
	private: System::Windows::Forms::RadioButton^  rdbDoubleQuote;
	private: System::Windows::Forms::RadioButton^  rdbNone;
	private: System::Windows::Forms::CheckBox^  chkParenthesis;
	private: System::Windows::Forms::Button^  btnConcatenate;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::TabControl^  tabSqlFunctions;
	private: System::Windows::Forms::Button^  btnOpenSQL;
	private: System::Windows::Forms::Button^  btnConcatenateExcel;
	private: System::Windows::Forms::GroupBox^  grpQuotes;
	private: System::Windows::Forms::TabPage^  tabCannedScripts;
	private: System::Windows::Forms::Button^  btnTriggerSearch;
	private: System::Windows::Forms::Button^  btnSPNameSearch;
	private: System::Windows::Forms::Button^  btnTableColSearch;
	private: System::Windows::Forms::Label^  lblParameter;
	private: System::Windows::Forms::TextBox^  txtParameter;
	private: System::Windows::Forms::Button^  btnSPStringSearch;
	private: System::Windows::Forms::Button^  btnAdminProvTran;
	private: System::Windows::Forms::Button^  btnDeleteClaims;
	private: System::Windows::Forms::Button^  btnGetLogin;
	private: System::Windows::Forms::DataGridView^  dgvGeneralGrid;
	private: System::Windows::Forms::Button^  btnGetMemberInfo;
	private: System::Windows::Forms::Button^  btnReasons;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma endregion

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtProcessText = (gcnew System::Windows::Forms::TextBox());
			this->txtPrefix = (gcnew System::Windows::Forms::TextBox());
			this->lblPrefix = (gcnew System::Windows::Forms::Label());
			this->lblSuffix = (gcnew System::Windows::Forms::Label());
			this->btnPrefixSuffix = (gcnew System::Windows::Forms::Button());
			this->txtSuffix = (gcnew System::Windows::Forms::TextBox());
			this->txtSeparator = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rdbSingleQuote = (gcnew System::Windows::Forms::RadioButton());
			this->rdbDoubleQuote = (gcnew System::Windows::Forms::RadioButton());
			this->rdbNone = (gcnew System::Windows::Forms::RadioButton());
			this->chkParenthesis = (gcnew System::Windows::Forms::CheckBox());
			this->btnConcatenate = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->tabSqlFunctions = (gcnew System::Windows::Forms::TabControl());
			this->tabCannedScripts = (gcnew System::Windows::Forms::TabPage());
			this->btnGetMemberInfo = (gcnew System::Windows::Forms::Button());
			this->btnGetLogin = (gcnew System::Windows::Forms::Button());
			this->btnDeleteClaims = (gcnew System::Windows::Forms::Button());
			this->btnAdminProvTran = (gcnew System::Windows::Forms::Button());
			this->btnTriggerSearch = (gcnew System::Windows::Forms::Button());
			this->btnSPNameSearch = (gcnew System::Windows::Forms::Button());
			this->btnTableColSearch = (gcnew System::Windows::Forms::Button());
			this->lblParameter = (gcnew System::Windows::Forms::Label());
			this->txtParameter = (gcnew System::Windows::Forms::TextBox());
			this->btnSPStringSearch = (gcnew System::Windows::Forms::Button());
			this->btnOpenSQL = (gcnew System::Windows::Forms::Button());
			this->btnConcatenateExcel = (gcnew System::Windows::Forms::Button());
			this->grpQuotes = (gcnew System::Windows::Forms::GroupBox());
			this->dgvGeneralGrid = (gcnew System::Windows::Forms::DataGridView());
			this->btnReasons = (gcnew System::Windows::Forms::Button());
			this->tabSqlFunctions->SuspendLayout();
			this->tabCannedScripts->SuspendLayout();
			this->grpQuotes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvGeneralGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// txtProcessText
			// 
			this->txtProcessText->Location = System::Drawing::Point(12, 9);
			this->txtProcessText->Multiline = true;
			this->txtProcessText->Name = L"txtProcessText";
			this->txtProcessText->Size = System::Drawing::Size(693, 315);
			this->txtProcessText->TabIndex = 0;
			this->txtProcessText->TextChanged += gcnew System::EventHandler(this, &Form1::txtProcessText_TextChanged);
			// 
			// txtPrefix
			// 
			this->txtPrefix->Location = System::Drawing::Point(711, 216);
			this->txtPrefix->Name = L"txtPrefix";
			this->txtPrefix->Size = System::Drawing::Size(171, 20);
			this->txtPrefix->TabIndex = 2;
			// 
			// lblPrefix
			// 
			this->lblPrefix->AutoSize = true;
			this->lblPrefix->Location = System::Drawing::Point(711, 200);
			this->lblPrefix->Name = L"lblPrefix";
			this->lblPrefix->Size = System::Drawing::Size(33, 13);
			this->lblPrefix->TabIndex = 4;
			this->lblPrefix->Text = L"Prefix";
			// 
			// lblSuffix
			// 
			this->lblSuffix->AutoSize = true;
			this->lblSuffix->Location = System::Drawing::Point(711, 242);
			this->lblSuffix->Name = L"lblSuffix";
			this->lblSuffix->Size = System::Drawing::Size(33, 13);
			this->lblSuffix->TabIndex = 5;
			this->lblSuffix->Text = L"Suffix";
			// 
			// btnPrefixSuffix
			// 
			this->btnPrefixSuffix->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnPrefixSuffix->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnPrefixSuffix->Location = System::Drawing::Point(711, 284);
			this->btnPrefixSuffix->Name = L"btnPrefixSuffix";
			this->btnPrefixSuffix->Size = System::Drawing::Size(171, 37);
			this->btnPrefixSuffix->TabIndex = 6;
			this->btnPrefixSuffix->Text = L"Prefix and Suffix";
			this->btnPrefixSuffix->UseVisualStyleBackColor = false;
			this->btnPrefixSuffix->Click += gcnew System::EventHandler(this, &Form1::btnPrefixSuffix_Click);
			// 
			// txtSuffix
			// 
			this->txtSuffix->Location = System::Drawing::Point(711, 258);
			this->txtSuffix->Name = L"txtSuffix";
			this->txtSuffix->Size = System::Drawing::Size(171, 20);
			this->txtSuffix->TabIndex = 7;
			// 
			// txtSeparator
			// 
			this->txtSeparator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtSeparator->Location = System::Drawing::Point(60, 17);
			this->txtSeparator->MaxLength = 1;
			this->txtSeparator->Name = L"txtSeparator";
			this->txtSeparator->Size = System::Drawing::Size(30, 18);
			this->txtSeparator->TabIndex = 8;
			this->txtSeparator->Text = L",";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 12);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Separator:";
			// 
			// rdbSingleQuote
			// 
			this->rdbSingleQuote->AutoSize = true;
			this->rdbSingleQuote->Checked = true;
			this->rdbSingleQuote->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rdbSingleQuote->Location = System::Drawing::Point(6, 49);
			this->rdbSingleQuote->Name = L"rdbSingleQuote";
			this->rdbSingleQuote->Size = System::Drawing::Size(48, 16);
			this->rdbSingleQuote->TabIndex = 10;
			this->rdbSingleQuote->TabStop = true;
			this->rdbSingleQuote->Text = L"Single";
			this->rdbSingleQuote->UseVisualStyleBackColor = true;
			// 
			// rdbDoubleQuote
			// 
			this->rdbDoubleQuote->AutoSize = true;
			this->rdbDoubleQuote->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rdbDoubleQuote->Location = System::Drawing::Point(59, 49);
			this->rdbDoubleQuote->Name = L"rdbDoubleQuote";
			this->rdbDoubleQuote->Size = System::Drawing::Size(52, 16);
			this->rdbDoubleQuote->TabIndex = 11;
			this->rdbDoubleQuote->TabStop = true;
			this->rdbDoubleQuote->Text = L"Double";
			this->rdbDoubleQuote->UseVisualStyleBackColor = true;
			// 
			// rdbNone
			// 
			this->rdbNone->AutoSize = true;
			this->rdbNone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rdbNone->Location = System::Drawing::Point(117, 49);
			this->rdbNone->Name = L"rdbNone";
			this->rdbNone->Size = System::Drawing::Size(45, 16);
			this->rdbNone->TabIndex = 12;
			this->rdbNone->TabStop = true;
			this->rdbNone->Text = L"None";
			this->rdbNone->UseVisualStyleBackColor = true;
			// 
			// chkParenthesis
			// 
			this->chkParenthesis->AutoSize = true;
			this->chkParenthesis->Checked = true;
			this->chkParenthesis->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkParenthesis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->chkParenthesis->Location = System::Drawing::Point(6, 77);
			this->chkParenthesis->Name = L"chkParenthesis";
			this->chkParenthesis->Size = System::Drawing::Size(73, 16);
			this->chkParenthesis->TabIndex = 14;
			this->chkParenthesis->Text = L"Parenthesis";
			this->chkParenthesis->UseVisualStyleBackColor = true;
			// 
			// btnConcatenate
			// 
			this->btnConcatenate->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnConcatenate->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnConcatenate->Location = System::Drawing::Point(711, 122);
			this->btnConcatenate->Name = L"btnConcatenate";
			this->btnConcatenate->Size = System::Drawing::Size(171, 28);
			this->btnConcatenate->TabIndex = 16;
			this->btnConcatenate->Text = L"&Concatenate";
			this->btnConcatenate->UseVisualStyleBackColor = false;
			this->btnConcatenate->Click += gcnew System::EventHandler(this, &Form1::btnConcatenate_Click);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::Maroon;
			this->btnClear->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnClear->Location = System::Drawing::Point(711, 348);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(171, 50);
			this->btnClear->TabIndex = 18;
			this->btnClear->Text = L"Clear Screen";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &Form1::btnClear_Click);
			// 
			// tabSqlFunctions
			// 
			this->tabSqlFunctions->Controls->Add(this->tabCannedScripts);
			this->tabSqlFunctions->Location = System::Drawing::Point(12, 330);
			this->tabSqlFunctions->Name = L"tabSqlFunctions";
			this->tabSqlFunctions->SelectedIndex = 0;
			this->tabSqlFunctions->Size = System::Drawing::Size(693, 229);
			this->tabSqlFunctions->TabIndex = 20;
			// 
			// tabCannedScripts
			// 
			this->tabCannedScripts->Controls->Add(this->btnReasons);
			this->tabCannedScripts->Controls->Add(this->btnGetMemberInfo);
			this->tabCannedScripts->Controls->Add(this->btnGetLogin);
			this->tabCannedScripts->Controls->Add(this->btnDeleteClaims);
			this->tabCannedScripts->Controls->Add(this->btnAdminProvTran);
			this->tabCannedScripts->Controls->Add(this->btnTriggerSearch);
			this->tabCannedScripts->Controls->Add(this->btnSPNameSearch);
			this->tabCannedScripts->Controls->Add(this->btnTableColSearch);
			this->tabCannedScripts->Controls->Add(this->lblParameter);
			this->tabCannedScripts->Controls->Add(this->txtParameter);
			this->tabCannedScripts->Controls->Add(this->btnSPStringSearch);
			this->tabCannedScripts->Location = System::Drawing::Point(4, 22);
			this->tabCannedScripts->Name = L"tabCannedScripts";
			this->tabCannedScripts->Size = System::Drawing::Size(685, 203);
			this->tabCannedScripts->TabIndex = 2;
			this->tabCannedScripts->Text = L"Canned Scripts";
			this->tabCannedScripts->UseVisualStyleBackColor = true;
			// 
			// btnGetMemberInfo
			// 
			this->btnGetMemberInfo->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnGetMemberInfo->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnGetMemberInfo->Location = System::Drawing::Point(278, 87);
			this->btnGetMemberInfo->Name = L"btnGetMemberInfo";
			this->btnGetMemberInfo->Size = System::Drawing::Size(130, 38);
			this->btnGetMemberInfo->TabIndex = 9;
			this->btnGetMemberInfo->Text = L"Get &Member Info";
			this->btnGetMemberInfo->UseVisualStyleBackColor = false;
			this->btnGetMemberInfo->Click += gcnew System::EventHandler(this, &Form1::btnGetMemberInfo_Click);
			// 
			// btnGetLogin
			// 
			this->btnGetLogin->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnGetLogin->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnGetLogin->Location = System::Drawing::Point(142, 87);
			this->btnGetLogin->Name = L"btnGetLogin";
			this->btnGetLogin->Size = System::Drawing::Size(130, 38);
			this->btnGetLogin->TabIndex = 8;
			this->btnGetLogin->Text = L"Get &Login";
			this->btnGetLogin->UseVisualStyleBackColor = false;
			this->btnGetLogin->Click += gcnew System::EventHandler(this, &Form1::btnGetLogin_Click);
			// 
			// btnDeleteClaims
			// 
			this->btnDeleteClaims->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnDeleteClaims->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnDeleteClaims->Location = System::Drawing::Point(6, 87);
			this->btnDeleteClaims->Name = L"btnDeleteClaims";
			this->btnDeleteClaims->Size = System::Drawing::Size(130, 38);
			this->btnDeleteClaims->TabIndex = 7;
			this->btnDeleteClaims->Text = L"&Delete Claims";
			this->btnDeleteClaims->UseVisualStyleBackColor = false;
			this->btnDeleteClaims->Click += gcnew System::EventHandler(this, &Form1::btnDeleteClaims_Click);
			// 
			// btnAdminProvTran
			// 
			this->btnAdminProvTran->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnAdminProvTran->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnAdminProvTran->Location = System::Drawing::Point(550, 43);
			this->btnAdminProvTran->Name = L"btnAdminProvTran";
			this->btnAdminProvTran->Size = System::Drawing::Size(130, 38);
			this->btnAdminProvTran->TabIndex = 6;
			this->btnAdminProvTran->Text = L"&Admin ProvTran";
			this->btnAdminProvTran->UseVisualStyleBackColor = false;
			this->btnAdminProvTran->Click += gcnew System::EventHandler(this, &Form1::btnAdminProvTran_Click);
			// 
			// btnTriggerSearch
			// 
			this->btnTriggerSearch->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnTriggerSearch->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnTriggerSearch->Location = System::Drawing::Point(414, 43);
			this->btnTriggerSearch->Name = L"btnTriggerSearch";
			this->btnTriggerSearch->Size = System::Drawing::Size(130, 38);
			this->btnTriggerSearch->TabIndex = 5;
			this->btnTriggerSearch->Text = L"Triggers";
			this->btnTriggerSearch->UseVisualStyleBackColor = false;
			this->btnTriggerSearch->Click += gcnew System::EventHandler(this, &Form1::btnTriggerSearch_Click);
			// 
			// btnSPNameSearch
			// 
			this->btnSPNameSearch->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnSPNameSearch->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnSPNameSearch->Location = System::Drawing::Point(278, 43);
			this->btnSPNameSearch->Name = L"btnSPNameSearch";
			this->btnSPNameSearch->Size = System::Drawing::Size(130, 38);
			this->btnSPNameSearch->TabIndex = 4;
			this->btnSPNameSearch->Text = L"SP &Name Search";
			this->btnSPNameSearch->UseVisualStyleBackColor = false;
			this->btnSPNameSearch->Click += gcnew System::EventHandler(this, &Form1::btnSPNameSearch_Click);
			// 
			// btnTableColSearch
			// 
			this->btnTableColSearch->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnTableColSearch->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnTableColSearch->Location = System::Drawing::Point(142, 43);
			this->btnTableColSearch->Name = L"btnTableColSearch";
			this->btnTableColSearch->Size = System::Drawing::Size(130, 38);
			this->btnTableColSearch->TabIndex = 3;
			this->btnTableColSearch->Text = L"Table Col Search";
			this->btnTableColSearch->UseVisualStyleBackColor = false;
			this->btnTableColSearch->Click += gcnew System::EventHandler(this, &Form1::btnTableColSearch_Click);
			// 
			// lblParameter
			// 
			this->lblParameter->AutoSize = true;
			this->lblParameter->Location = System::Drawing::Point(3, 15);
			this->lblParameter->Name = L"lblParameter";
			this->lblParameter->Size = System::Drawing::Size(58, 13);
			this->lblParameter->TabIndex = 2;
			this->lblParameter->Text = L"Parameter:";
			// 
			// txtParameter
			// 
			this->txtParameter->Location = System::Drawing::Point(67, 12);
			this->txtParameter->Name = L"txtParameter";
			this->txtParameter->Size = System::Drawing::Size(613, 20);
			this->txtParameter->TabIndex = 1;
			// 
			// btnSPStringSearch
			// 
			this->btnSPStringSearch->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnSPStringSearch->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnSPStringSearch->Location = System::Drawing::Point(6, 43);
			this->btnSPStringSearch->Name = L"btnSPStringSearch";
			this->btnSPStringSearch->Size = System::Drawing::Size(130, 38);
			this->btnSPStringSearch->TabIndex = 0;
			this->btnSPStringSearch->Text = L"SP &String Search";
			this->btnSPStringSearch->UseVisualStyleBackColor = false;
			this->btnSPStringSearch->Click += gcnew System::EventHandler(this, &Form1::btnSPStringSearch_Click);
			// 
			// btnOpenSQL
			// 
			this->btnOpenSQL->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->btnOpenSQL->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnOpenSQL->Location = System::Drawing::Point(711, 404);
			this->btnOpenSQL->Name = L"btnOpenSQL";
			this->btnOpenSQL->Size = System::Drawing::Size(171, 82);
			this->btnOpenSQL->TabIndex = 21;
			this->btnOpenSQL->Text = L"Open SQL";
			this->btnOpenSQL->UseVisualStyleBackColor = false;
			this->btnOpenSQL->Click += gcnew System::EventHandler(this, &Form1::btnOpenSQL_Click);
			// 
			// btnConcatenateExcel
			// 
			this->btnConcatenateExcel->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnConcatenateExcel->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnConcatenateExcel->Location = System::Drawing::Point(711, 156);
			this->btnConcatenateExcel->Name = L"btnConcatenateExcel";
			this->btnConcatenateExcel->Size = System::Drawing::Size(171, 27);
			this->btnConcatenateExcel->TabIndex = 22;
			this->btnConcatenateExcel->Text = L"Concatenate &Excel";
			this->btnConcatenateExcel->UseVisualStyleBackColor = false;
			this->btnConcatenateExcel->Click += gcnew System::EventHandler(this, &Form1::btnConcatenateExcel_Click);
			// 
			// grpQuotes
			// 
			this->grpQuotes->Controls->Add(this->rdbSingleQuote);
			this->grpQuotes->Controls->Add(this->rdbDoubleQuote);
			this->grpQuotes->Controls->Add(this->rdbNone);
			this->grpQuotes->Controls->Add(this->chkParenthesis);
			this->grpQuotes->Controls->Add(this->label1);
			this->grpQuotes->Controls->Add(this->txtSeparator);
			this->grpQuotes->Location = System::Drawing::Point(711, 9);
			this->grpQuotes->Name = L"grpQuotes";
			this->grpQuotes->Size = System::Drawing::Size(171, 107);
			this->grpQuotes->TabIndex = 23;
			this->grpQuotes->TabStop = false;
			this->grpQuotes->Text = L"Text Format";
			// 
			// dgvGeneralGrid
			// 
			this->dgvGeneralGrid->AllowUserToAddRows = false;
			this->dgvGeneralGrid->AllowUserToDeleteRows = false;
			this->dgvGeneralGrid->AllowUserToOrderColumns = true;
			this->dgvGeneralGrid->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dgvGeneralGrid->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dgvGeneralGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvGeneralGrid->Location = System::Drawing::Point(12, 9);
			this->dgvGeneralGrid->Name = L"dgvGeneralGrid";
			this->dgvGeneralGrid->ReadOnly = true;
			this->dgvGeneralGrid->Size = System::Drawing::Size(693, 315);
			this->dgvGeneralGrid->TabIndex = 24;
			this->dgvGeneralGrid->Visible = false;
			// 
			// btnReasons
			// 
			this->btnReasons->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnReasons->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnReasons->Location = System::Drawing::Point(414, 87);
			this->btnReasons->Name = L"btnReasons";
			this->btnReasons->Size = System::Drawing::Size(130, 38);
			this->btnReasons->TabIndex = 10;
			this->btnReasons->Text = L"&Reasons";
			this->btnReasons->UseVisualStyleBackColor = false;
			this->btnReasons->Click += gcnew System::EventHandler(this, &Form1::btnReasons_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(894, 571);
			this->Controls->Add(this->dgvGeneralGrid);
			this->Controls->Add(this->grpQuotes);
			this->Controls->Add(this->btnConcatenateExcel);
			this->Controls->Add(this->btnOpenSQL);
			this->Controls->Add(this->tabSqlFunctions);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnConcatenate);
			this->Controls->Add(this->btnPrefixSuffix);
			this->Controls->Add(this->txtSuffix);
			this->Controls->Add(this->lblSuffix);
			this->Controls->Add(this->lblPrefix);
			this->Controls->Add(this->txtPrefix);
			this->Controls->Add(this->txtProcessText);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->Text = L"JUP";
			this->tabSqlFunctions->ResumeLayout(false);
			this->tabCannedScripts->ResumeLayout(false);
			this->tabCannedScripts->PerformLayout();
			this->grpQuotes->ResumeLayout(false);
			this->grpQuotes->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvGeneralGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region FunctionRepository


	//Copy current process text to clipboard
	private: System::Void CopyToClipboard(int textCount) {
				 if (textCount > 0) {
					 System::Windows::Forms::Clipboard::SetText(txtProcessText->Text);
					 this->Text = Convert::ToString(textCount) + " processed and copied to clipboard.";
		 }
	 }

	

	private: System::Void TextSqlReader(String^ fileName) {
				 try   
				 {  
					 txtProcessText->Clear();
					 txtProcessText->Focus();
					 StreamReader^ din = File::OpenText(fileName);  
					 String^ str;  
					 int count = 0;  
					 int maxCount = File::ReadAllLines(fileName)->Length;

					 while ((str = din->ReadLine()) != nullptr)   
					 {  
						 count++;  
						 txtProcessText->AppendText(str->Replace("^",txtParameter->Text));


						 if(count < maxCount) {
							 txtProcessText->AppendText(Environment::NewLine);
						 }
					 }  
					 this->CopyToClipboard(count);
					
				 }  
				 catch (Exception^ e)  
				 {  
					 if (dynamic_cast<FileNotFoundException^>(e))  
						 MessageBox::Show("file '{0}' not found", fileName);  
					 else  
						 MessageBox::Show("problem reading file '{0}'", fileName);  
				 }
			 }
			 
			 
			 #define for_each(_ITER_, _COLL_) for (auto _ITER_ = _COLL_.begin(); \
			_ITER_ != _COLL_.end(); _ITER_++)


#pragma endregion
		


	private: System::Void btnPrefixSuffix_Click(System::Object^  sender, System::EventArgs^  e) {
				
				 if (txtProcessText->Text != "") {
					 txtProcessText->Text = txtProcessText->Text->Trim();
					 array<String^>^ lines = txtProcessText->Lines;
					 int count = lines->Length;
					 Array::Sort(lines);
					 txtProcessText->Clear();
					 int textCount = 0;

					 for (int idx = 0; idx < count; idx++) {
						 if (idx > 0 && idx < count) {
							 if (lines[idx] != lines[idx - 1]) {
								 txtProcessText->AppendText(txtPrefix->Text + lines[idx] + txtSuffix->Text);
								 if (idx != count - 1) {
									 txtProcessText->AppendText(Environment::NewLine);
								 }
								 textCount++;
							 }
						 }
						 else {
							 txtProcessText->AppendText(txtPrefix->Text + lines[idx] + txtSuffix->Text);
							 if (idx != count - 1) {
								 txtProcessText->AppendText(Environment::NewLine);
							 }
							 textCount++;
						 }

					 }
					 this->CopyToClipboard(textCount);
				 }
				 else {
					 FunctionRepository::EmptyTextBoxError(txtProcessText->Text);
				 }

			 }

	private: System::Void btnConcatenate_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (txtProcessText->Text != "") {
					 txtProcessText->Text = txtProcessText->Text->Trim();
					 array<String^>^ lines = txtProcessText->Lines;	
					 int count = lines->Length;
					 int ctr = count;

					 //Array::Sort(lines);
					 txtProcessText->Clear();

					 if (chkParenthesis->Checked == true)
						 txtProcessText->AppendText("(");

					 int textCount = 0;

					 for (int idx = 0; idx < count; idx++) {
						 txtProcessText->AppendText(FunctionRepository::Quotation(rdbSingleQuote->Checked, rdbDoubleQuote->Checked));			
						 txtProcessText->AppendText(txtPrefix->Text + lines[idx] + txtSuffix->Text);
						 txtProcessText->AppendText(FunctionRepository::Quotation(rdbSingleQuote->Checked, rdbDoubleQuote->Checked));
						 if (idx != count - 1) {
							 txtProcessText->AppendText(txtSeparator->Text);
						 }				
						 textCount++;
					 }

					 if (chkParenthesis->Checked == true)
						 txtProcessText->AppendText(")");

					 this->CopyToClipboard(textCount);
				 }
				 else {
					 FunctionRepository::EmptyTextBoxError(txtProcessText->Text);
				 }
				 
				 
			 }

	private: System::Void txtProcessText_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 array<String^>^ lines = txtProcessText->Lines;
				 int count = lines->Length;
				 
				 if (count > 0) {
					this->Text = Convert::ToString(count) + " items currently in textbox";
				 }
				 else {
					this->Text = "JUP";
				 }
			 }

	private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
				 txtProcessText->Clear();
				 if (dgvGeneralGrid->Visible == true) {
					dgvGeneralGrid->Visible = false;
				 }
				 FunctionRepository::ClearClipboard();
			 }

	private: System::Void btnOpenSQL_Click(System::Object^  sender, System::EventArgs^  e) {

				 Process::Start("C:\\Program Files (x86)\\Microsoft SQL Server\\100\\Tools\\Binn\\VSShell\\Common7\\IDE\\Ssms.exe");

			 }
	private: System::Void btnConcatenateExcel_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (txtProcessText->Text != "") {
					 txtProcessText->Text = txtProcessText->Text->Trim();
					 array<String^>^ lines = txtProcessText->Lines;	
					 int count = lines->Length;
					 int ctr = count;

					 Array::Sort(lines);
					 txtProcessText->Clear();

					 if (chkParenthesis->Checked == true)
						 txtProcessText->AppendText("=Concatenate(");

					 int textCount = 0;

					 for (int idx = 0; idx < count; idx++) {
						 txtProcessText->AppendText("\"");			
						 txtProcessText->AppendText(txtPrefix->Text + lines[idx] + txtSuffix->Text);
						 txtProcessText->AppendText("\"");
						 if (idx != count - 1) {
							 txtProcessText->AppendText(txtSeparator->Text);
						 }				
						 textCount++;
					 }

					 if (chkParenthesis->Checked == true)
						 txtProcessText->AppendText(")");

					 this->CopyToClipboard(textCount);
				 }
				 else {
					 FunctionRepository::EmptyTextBoxError(txtProcessText->Text);
				 }
			 }

	private: System::Void btnSPStringSearch_Click(System::Object^  sender, System::EventArgs^  e) {
				String^ fileName = Application::StartupPath + "\\SPStringSearch.txt";
				dgvGeneralGrid->Visible = true;
				this->TextSqlReader(fileName);
				System::Data::DataSet^ dsRst = gcnew System::Data::DataSet();
				dsRst = FunctionRepository::SQLCmdReturnDS(txtProcessText->Text);
				dgvGeneralGrid->DataSource = dsRst->Tables[0];
				dgvGeneralGrid->Refresh();

			 }
	private: System::Void btnTableColSearch_Click(System::Object^  sender, System::EventArgs^  e) {
				String^ fileName = Application::StartupPath + "\\SPTableColSearch.txt";
				this->TextSqlReader(fileName);
			 }
	private: System::Void btnSPNameSearch_Click(System::Object^  sender, System::EventArgs^  e) {
					String^ fileName = Application::StartupPath + "\\SPSearch.txt";
					this->TextSqlReader(fileName);
			 }
	private: System::Void btnTriggerSearch_Click(System::Object^  sender, System::EventArgs^  e) {
					String^ fileName = Application::StartupPath + "\\TriggerSearch.txt";
					this->TextSqlReader(fileName);
			 }

	private: System::Void btnAdminProvTran_Click(System::Object^  sender, System::EventArgs^  e) {
					String^ fileName = Application::StartupPath + "\\AdminProviderTran.txt";
					this->TextSqlReader(fileName);
					FunctionRepository::SqlQueryExecute(txtProcessText->Text);
			 }
	private: System::Void btnDeleteClaims_Click(System::Object^  sender, System::EventArgs^  e) {
					String^ fileName = Application::StartupPath + "\\DeleteClaims.txt";
					this->TextSqlReader(fileName);
			 }

	private: System::Void btnGetLogin_Click(System::Object^  sender, System::EventArgs^  e) {
				String^ fileName = Application::StartupPath + "\\LoginDetails.txt";
				dgvGeneralGrid->Visible = true;
				this->TextSqlReader(fileName);
				System::Data::DataSet^ dsRst = gcnew System::Data::DataSet();
				dsRst = FunctionRepository::SQLCmdReturnDS(txtProcessText->Text);
				dgvGeneralGrid->DataSource = dsRst->Tables[0];
				dgvGeneralGrid->Refresh();
			 }
	private: System::Void btnGetMemberInfo_Click(System::Object^  sender, System::EventArgs^  e) {
				String^ fileName = Application::StartupPath + "\\GetMemberInfo.txt";
				dgvGeneralGrid->Visible = true;
				this->TextSqlReader(fileName);
				System::Data::DataSet^ dsRst = gcnew System::Data::DataSet();
				dsRst = FunctionRepository::SQLCmdReturnDS(txtProcessText->Text);
				dgvGeneralGrid->DataSource = dsRst->Tables[0];
				dgvGeneralGrid->Refresh();
			 }
private: System::Void btnReasons_Click(System::Object^  sender, System::EventArgs^  e) {
				String^ fileName = Application::StartupPath + "\\Reasons.txt";
				dgvGeneralGrid->Visible = true;
				this->TextSqlReader(fileName);
				System::Data::DataSet^ dsRst = gcnew System::Data::DataSet();
				dsRst = FunctionRepository::SQLCmdReturnDS(txtProcessText->Text);
				dgvGeneralGrid->DataSource = dsRst->Tables[0];
				dgvGeneralGrid->Refresh();
		 }
};
}

