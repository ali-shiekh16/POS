#pragma once

#ifndef PURCHASE_FORM
#define PURCHASE_FORM

#include "Query.h"
#include "Utils.h"
#include "ProductInfo.h"

namespace POS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Collections;

	/// <summary>
	/// Summary for PurchasesForm
	/// </summary>
	
	public ref class PurchasesForm : public System::Windows::Forms::Form
	{
	private:
		Query^ query;
		bool isEditing;
		String^ insertQuery;
		List<ProductInfo^>^ productsInfo;

	private: Bunifu::Framework::UI::BunifuFlatButton^ btnDelete;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnEdit;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ lblRemaningAmount;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel5;
	public:
		PurchasesForm(void)
		{
			InitializeComponent();
			intializeTableCols();
			query = gcnew Query();
			productsInfo = gcnew List<ProductInfo^>();
			isEditing = false;
			table->ClearSelection();
			disableButtons();

			insertQuery = "INSERT INTO Purchases (paidAmount, productId, supplierId, qty, unitCost, dateOfLastPay) VALUES";
		}

	protected:
		~PurchasesForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		void intializeTableCols()
		{
			table->Columns->Add("productName", "Product");
			table->Columns->Add("unitCost", "Unit Cost");
			table->Columns->Add("qty", "Quantity");
		}

	private: Bunifu::Framework::UI::BunifuFlatButton^ btnAdd;
	protected:
	private: Bunifu::Framework::UI::BunifuCustomLabel^ Supplier;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ Product;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtUnitCost;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ Name;


	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtQty;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtPaidAmount;

	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel2;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel3;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ lblDues;

	private: Bunifu::Framework::UI::BunifuCustomDataGrid^ table;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnPurchase;


	private: System::Windows::Forms::ComboBox^ comboProducts;
	private: System::Windows::Forms::ComboBox^ comboSupplier;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PurchasesForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btnAdd = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->Supplier = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->Product = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->txtUnitCost = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->Name = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->txtQty = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->txtPaidAmount = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel3 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->lblDues = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->table = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->btnPurchase = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->comboProducts = (gcnew System::Windows::Forms::ComboBox());
			this->comboSupplier = (gcnew System::Windows::Forms::ComboBox());
			this->btnDelete = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnEdit = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->lblRemaningAmount = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel5 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAdd
			// 
			this->btnAdd->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnAdd->BorderRadius = 0;
			this->btnAdd->ButtonText = L"Add";
			this->btnAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAdd->DisabledColor = System::Drawing::Color::Gray;
			this->btnAdd->Iconcolor = System::Drawing::Color::Transparent;
			this->btnAdd->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.Iconimage")));
			this->btnAdd->Iconimage_right = nullptr;
			this->btnAdd->Iconimage_right_Selected = nullptr;
			this->btnAdd->Iconimage_Selected = nullptr;
			this->btnAdd->IconMarginLeft = 0;
			this->btnAdd->IconMarginRight = 0;
			this->btnAdd->IconRightVisible = true;
			this->btnAdd->IconRightZoom = 0;
			this->btnAdd->IconVisible = false;
			this->btnAdd->IconZoom = 90;
			this->btnAdd->IsTab = false;
			this->btnAdd->Location = System::Drawing::Point(33, 273);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnAdd->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnAdd->OnHoverTextColor = System::Drawing::Color::White;
			this->btnAdd->selected = false;
			this->btnAdd->Size = System::Drawing::Size(316, 48);
			this->btnAdd->TabIndex = 30;
			this->btnAdd->Text = L"Add";
			this->btnAdd->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnAdd->Textcolor = System::Drawing::Color::White;
			this->btnAdd->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Click += gcnew System::EventHandler(this, &PurchasesForm::btnAdd_Click);
			// 
			// Supplier
			// 
			this->Supplier->AutoSize = true;
			this->Supplier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Supplier->Location = System::Drawing::Point(39, 495);
			this->Supplier->Name = L"Supplier";
			this->Supplier->Size = System::Drawing::Size(61, 18);
			this->Supplier->TabIndex = 25;
			this->Supplier->Text = L"Supplier";
			// 
			// Product
			// 
			this->Product->AutoSize = true;
			this->Product->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Product->Location = System::Drawing::Point(32, 48);
			this->Product->Name = L"Product";
			this->Product->Size = System::Drawing::Size(60, 20);
			this->Product->TabIndex = 24;
			this->Product->Text = L"Product";
			// 
			// txtUnitCost
			// 
			this->txtUnitCost->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtUnitCost->BorderColorIdle = System::Drawing::Color::Silver;
			this->txtUnitCost->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtUnitCost->BorderThickness = 3;
			this->txtUnitCost->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtUnitCost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtUnitCost->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtUnitCost->isPassword = false;
			this->txtUnitCost->Location = System::Drawing::Point(33, 137);
			this->txtUnitCost->Margin = System::Windows::Forms::Padding(4);
			this->txtUnitCost->Name = L"txtUnitCost";
			this->txtUnitCost->Size = System::Drawing::Size(310, 32);
			this->txtUnitCost->TabIndex = 23;
			this->txtUnitCost->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// Name
			// 
			this->Name->AutoSize = true;
			this->Name->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name->Location = System::Drawing::Point(35, 113);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(69, 20);
			this->Name->TabIndex = 22;
			this->Name->Text = L"Unit Cost";
			// 
			// txtQty
			// 
			this->txtQty->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtQty->BorderColorIdle = System::Drawing::Color::Silver;
			this->txtQty->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtQty->BorderThickness = 3;
			this->txtQty->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtQty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtQty->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtQty->isPassword = false;
			this->txtQty->Location = System::Drawing::Point(36, 215);
			this->txtQty->Margin = System::Windows::Forms::Padding(4);
			this->txtQty->Name = L"txtQty";
			this->txtQty->Size = System::Drawing::Size(310, 32);
			this->txtQty->TabIndex = 34;
			this->txtQty->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->Location = System::Drawing::Point(35, 191);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(65, 20);
			this->bunifuCustomLabel1->TabIndex = 33;
			this->bunifuCustomLabel1->Text = L"Quantity";
			// 
			// txtPaidAmount
			// 
			this->txtPaidAmount->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtPaidAmount->BorderColorIdle = System::Drawing::Color::Silver;
			this->txtPaidAmount->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtPaidAmount->BorderThickness = 3;
			this->txtPaidAmount->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtPaidAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtPaidAmount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtPaidAmount->isPassword = false;
			this->txtPaidAmount->Location = System::Drawing::Point(137, 396);
			this->txtPaidAmount->Margin = System::Windows::Forms::Padding(4);
			this->txtPaidAmount->Name = L"txtPaidAmount";
			this->txtPaidAmount->Size = System::Drawing::Size(212, 32);
			this->txtPaidAmount->TabIndex = 36;
			this->txtPaidAmount->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txtPaidAmount->OnValueChanged += gcnew System::EventHandler(this, &PurchasesForm::txtPaidAmount_OnValueChanged);
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->Location = System::Drawing::Point(36, 402);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(94, 20);
			this->bunifuCustomLabel2->TabIndex = 35;
			this->bunifuCustomLabel2->Text = L"Paid Amount";
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->AutoSize = true;
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel3->Location = System::Drawing::Point(36, 348);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(81, 20);
			this->bunifuCustomLabel3->TabIndex = 37;
			this->bunifuCustomLabel3->Text = L"Total Dues:";
			// 
			// lblDues
			// 
			this->lblDues->AutoSize = true;
			this->lblDues->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDues->Location = System::Drawing::Point(136, 348);
			this->lblDues->Name = L"lblDues";
			this->lblDues->Size = System::Drawing::Size(18, 20);
			this->lblDues->TabIndex = 38;
			this->lblDues->Text = L"0";
			// 
			// table
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->table->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->table->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->table->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->table->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table->DoubleBuffered = true;
			this->table->EnableHeadersVisualStyles = false;
			this->table->HeaderBgColor = System::Drawing::Color::SeaGreen;
			this->table->HeaderForeColor = System::Drawing::Color::White;
			this->table->Location = System::Drawing::Point(369, 71);
			this->table->Name = L"table";
			this->table->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->table->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->table->Size = System::Drawing::Size(475, 533);
			this->table->TabIndex = 39;
			this->table->SelectionChanged += gcnew System::EventHandler(this, &PurchasesForm::table_SelectionChanged);
			// 
			// btnPurchase
			// 
			this->btnPurchase->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnPurchase->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnPurchase->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPurchase->BorderRadius = 0;
			this->btnPurchase->ButtonText = L"Complete Purchase";
			this->btnPurchase->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPurchase->DisabledColor = System::Drawing::Color::Gray;
			this->btnPurchase->Iconcolor = System::Drawing::Color::Transparent;
			this->btnPurchase->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPurchase.Iconimage")));
			this->btnPurchase->Iconimage_right = nullptr;
			this->btnPurchase->Iconimage_right_Selected = nullptr;
			this->btnPurchase->Iconimage_Selected = nullptr;
			this->btnPurchase->IconMarginLeft = 0;
			this->btnPurchase->IconMarginRight = 0;
			this->btnPurchase->IconRightVisible = true;
			this->btnPurchase->IconRightZoom = 0;
			this->btnPurchase->IconVisible = false;
			this->btnPurchase->IconZoom = 90;
			this->btnPurchase->IsTab = false;
			this->btnPurchase->Location = System::Drawing::Point(39, 556);
			this->btnPurchase->Name = L"btnPurchase";
			this->btnPurchase->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnPurchase->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnPurchase->OnHoverTextColor = System::Drawing::Color::White;
			this->btnPurchase->selected = false;
			this->btnPurchase->Size = System::Drawing::Size(310, 48);
			this->btnPurchase->TabIndex = 40;
			this->btnPurchase->Text = L"Complete Purchase";
			this->btnPurchase->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnPurchase->Textcolor = System::Drawing::Color::White;
			this->btnPurchase->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPurchase->Click += gcnew System::EventHandler(this, &PurchasesForm::btnPurchase_Click);
			// 
			// comboProducts
			// 
			this->comboProducts->FormattingEnabled = true;
			this->comboProducts->Location = System::Drawing::Point(30, 71);
			this->comboProducts->Name = L"comboProducts";
			this->comboProducts->Size = System::Drawing::Size(307, 21);
			this->comboProducts->TabIndex = 41;
			this->comboProducts->SelectedIndexChanged += gcnew System::EventHandler(this, &PurchasesForm::comboProducts_SelectedIndexChanged);
			// 
			// comboSupplier
			// 
			this->comboSupplier->FormattingEnabled = true;
			this->comboSupplier->Location = System::Drawing::Point(140, 496);
			this->comboSupplier->Name = L"comboSupplier";
			this->comboSupplier->Size = System::Drawing::Size(209, 21);
			this->comboSupplier->TabIndex = 42;
			this->comboSupplier->SelectedIndexChanged += gcnew System::EventHandler(this, &PurchasesForm::comboSupplier_SelectedIndexChanged);
			// 
			// btnDelete
			// 
			this->btnDelete->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnDelete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnDelete->BorderRadius = 0;
			this->btnDelete->ButtonText = L"Delete";
			this->btnDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDelete->DisabledColor = System::Drawing::Color::Gray;
			this->btnDelete->Iconcolor = System::Drawing::Color::Transparent;
			this->btnDelete->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDelete.Iconimage")));
			this->btnDelete->Iconimage_right = nullptr;
			this->btnDelete->Iconimage_right_Selected = nullptr;
			this->btnDelete->Iconimage_Selected = nullptr;
			this->btnDelete->IconMarginLeft = 0;
			this->btnDelete->IconMarginRight = 0;
			this->btnDelete->IconRightVisible = true;
			this->btnDelete->IconRightZoom = 0;
			this->btnDelete->IconVisible = false;
			this->btnDelete->IconZoom = 90;
			this->btnDelete->IsTab = false;
			this->btnDelete->Location = System::Drawing::Point(779, 17);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnDelete->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnDelete->OnHoverTextColor = System::Drawing::Color::White;
			this->btnDelete->selected = false;
			this->btnDelete->Size = System::Drawing::Size(65, 48);
			this->btnDelete->TabIndex = 43;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnDelete->Textcolor = System::Drawing::Color::White;
			this->btnDelete->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Click += gcnew System::EventHandler(this, &PurchasesForm::btnDelete_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnEdit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnEdit->BorderRadius = 0;
			this->btnEdit->ButtonText = L"Edit";
			this->btnEdit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEdit->DisabledColor = System::Drawing::Color::Gray;
			this->btnEdit->Iconcolor = System::Drawing::Color::Transparent;
			this->btnEdit->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEdit.Iconimage")));
			this->btnEdit->Iconimage_right = nullptr;
			this->btnEdit->Iconimage_right_Selected = nullptr;
			this->btnEdit->Iconimage_Selected = nullptr;
			this->btnEdit->IconMarginLeft = 0;
			this->btnEdit->IconMarginRight = 0;
			this->btnEdit->IconRightVisible = true;
			this->btnEdit->IconRightZoom = 0;
			this->btnEdit->IconVisible = false;
			this->btnEdit->IconZoom = 90;
			this->btnEdit->IsTab = false;
			this->btnEdit->Location = System::Drawing::Point(708, 17);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnEdit->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnEdit->OnHoverTextColor = System::Drawing::Color::White;
			this->btnEdit->selected = false;
			this->btnEdit->Size = System::Drawing::Size(65, 48);
			this->btnEdit->TabIndex = 44;
			this->btnEdit->Text = L"Edit";
			this->btnEdit->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnEdit->Textcolor = System::Drawing::Color::White;
			this->btnEdit->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEdit->Click += gcnew System::EventHandler(this, &PurchasesForm::btnEdit_Click);
			// 
			// lblRemaningAmount
			// 
			this->lblRemaningAmount->AutoSize = true;
			this->lblRemaningAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRemaningAmount->Location = System::Drawing::Point(189, 450);
			this->lblRemaningAmount->Name = L"lblRemaningAmount";
			this->lblRemaningAmount->Size = System::Drawing::Size(18, 20);
			this->lblRemaningAmount->TabIndex = 46;
			this->lblRemaningAmount->Text = L"0";
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->AutoSize = true;
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->Location = System::Drawing::Point(36, 450);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(132, 20);
			this->bunifuCustomLabel5->TabIndex = 45;
			this->bunifuCustomLabel5->Text = L"Remaning Amount:";
			// 
			// PurchasesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(856, 642);
			this->Controls->Add(this->lblRemaningAmount);
			this->Controls->Add(this->bunifuCustomLabel5);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->comboSupplier);
			this->Controls->Add(this->comboProducts);
			this->Controls->Add(this->btnPurchase);
			this->Controls->Add(this->table);
			this->Controls->Add(this->lblDues);
			this->Controls->Add(this->bunifuCustomLabel3);
			this->Controls->Add(this->txtPaidAmount);
			this->Controls->Add(this->bunifuCustomLabel2);
			this->Controls->Add(this->txtQty);
			this->Controls->Add(this->bunifuCustomLabel1);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->Supplier);
			this->Controls->Add(this->Product);
			this->Controls->Add(this->txtUnitCost);
			this->Controls->Add(this->Name);
			//this->Name = L"PurchasesForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PurchasesForm";
			this->Load += gcnew System::EventHandler(this, &PurchasesForm::PurchasesForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private:
		void populateProductsDropdown() 
		{
			auto dataTable = query->fetchData("SELECT productId, [name] FROM Products;");

			comboProducts->DataSource = dataTable;
			comboProducts->ValueMember = "productId";
			comboProducts->DisplayMember = "name";
		}

		void populateSupplierDropdown() 
		{
			auto dataTable = query->fetchData("SELECT userId, name FROM Users WHERE roleId = " + Convert::ToInt16(Utils::roles::supplier));

			comboSupplier->DataSource = dataTable;
			comboSupplier->ValueMember = "userId";
			comboSupplier->DisplayMember = "name";
		}

	private: System::Void PurchasesForm_Load(System::Object^ sender, System::EventArgs^ e) {
		populateProductsDropdown();
		populateSupplierDropdown();

	}

	private: System::Void comboProducts_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void comboSupplier_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: DataGridViewRow^ createTableRow(ProductInfo^ info)
	{

		auto row = gcnew DataGridViewRow();
		auto cell1 = gcnew DataGridViewTextBoxCell();
		cell1->Value = info->productName;

		auto cell2 = gcnew DataGridViewTextBoxCell();
		cell2->Value = info->unitCost;

		auto cell3 = gcnew DataGridViewTextBoxCell();
		cell3->Value = info->qty;

		row->Cells->Add(cell1);
		row->Cells->Add(cell2);
		row->Cells->Add(cell3);

		return row;
	}


	private: ProductInfo^ createProductInfoFromForm()
	{
		auto productName = comboProducts->GetItemText(comboProducts->SelectedItem);
		auto productId = Convert::ToInt32(comboProducts->SelectedValue);

		auto unitCost = Convert::ToDouble(txtUnitCost->Text);
		auto quantity = Convert::ToInt32(txtQty->Text);

		return gcnew ProductInfo(productName, productId, unitCost, quantity);
	}

	private: void clearForm()
	{
		comboProducts->SelectedIndex = 0;
		txtQty->Text = "";
		txtUnitCost->Text = "";
	}

	
	private: void clearTable()
	{
		table->AllowUserToAddRows = false;

		while (table->Rows->Count > 0)
			table->Rows->Remove(table->Rows[0]);

		table->AllowUserToAddRows = true;
	}

	private: void clearLabels()
	{
		productsInfo->Clear();

		lblDues->Text = "0";

		lblRemaningAmount->Text = "0";

		txtPaidAmount->Text = "";

		comboSupplier->SelectedIndex = 0;
	}

private: double calculateDues()
{
	double totalDues = 0;
	for (int i = 0; i < productsInfo->Count; i++)
		totalDues += (productsInfo[i]->unitCost * productsInfo[i]->qty);

	return totalDues;
}

private: void updateDuesLabel(double totalDues)
{
	lblDues->Text = Convert::ToString(totalDues);
}

private: void updateRemaningLabel()
{
	double paidAmount = String::IsNullOrEmpty(txtPaidAmount->Text) ? 0 : Convert::ToDouble(txtPaidAmount->Text);
	double totalDues = Convert::ToDouble(lblDues->Text);
	double remaning = totalDues - paidAmount;

	lblRemaningAmount->Text = Convert::ToString(remaning);
}

private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	auto productInfo = createProductInfoFromForm();

	auto row = createTableRow(productInfo);

	if (isEditing)
	{
		auto index = table->SelectedRows[0]->Index;

		productsInfo->RemoveAt(index);
		productsInfo->Insert(index, productInfo);

		table->Rows->RemoveAt(index);
		table->Rows->Insert(index, row);

		isEditing = false;
		btnAdd->Text = "Add";
	}
	else
	{
		productsInfo->Add(productInfo);
		table->Rows->Add(row);
	}
	table->ClearSelection();
	clearForm();
	disableButtons();

	updateDuesLabel(calculateDues());
	updateRemaningLabel();
}

private: void populateFormFromSelectedRow() 
{
	auto index = table->SelectedRows[0]->Index;
	comboProducts->SelectedValue = productsInfo[index]->productId;
	txtUnitCost->Text = Convert::ToString(productsInfo[index]->unitCost);
	txtQty->Text = Convert::ToString(productsInfo[index]->qty);
}

private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) 
{
	isEditing = true;
	btnAdd->Text = "Save";
	populateFormFromSelectedRow();
}

private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	auto index = table->SelectedRows[0]->Index;

	table->Rows->RemoveAt(index);
	productsInfo->RemoveAt(index);

	disableButtons();
}

private: void enableButtons()
{
	btnDelete->Enabled = true;
	btnEdit->Enabled = true;
}

private: void disableButtons()
{
	btnDelete->Enabled = false;
	btnEdit->Enabled = false;
}

private: System::Void table_SelectionChanged(System::Object^ sender, System::EventArgs^ e) 
{
	enableButtons();
}

private: System::Void btnPurchase_Click(System::Object^ sender, System::EventArgs^ e) 
{
	auto balance = String::IsNullOrEmpty(txtPaidAmount->Text) ? 0 : Convert::ToDouble(txtPaidAmount->Text);

	for (int i = 0; i < productsInfo->Count; i++)
	{
		double payAmount = 0;
		double itemCost = (productsInfo[i]->unitCost * productsInfo[i]->qty);
		if (balance > itemCost)
		{
			payAmount = itemCost;
			balance -= itemCost;
		}
		else if (balance > 0)
		{
			payAmount = balance;
			balance = 0;
		}

		insertQuery += "('" + payAmount + "', '" + productsInfo[i]->productId + "', '" + comboSupplier->SelectedValue + "', '" +productsInfo[i]->qty + "', '" + productsInfo[i]->unitCost + "', '" + System::DateTime::Now + "')";

		insertQuery += (i == (productsInfo->Count - 1)) ? "" : ", ";
	}

	if (query->exec(insertQuery))
	{
		MessageBox::Show("Purchase Completed!");
		clearForm();
		clearLabels();
	}
}

private: System::Void txtPaidAmount_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {
	clearTable();
	updateDuesLabel(calculateDues());
	updateRemaningLabel();
}
};
}

#endif
#pragma endregion