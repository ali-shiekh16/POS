#pragma once

#include "Query.h"
#include "CustomersForm.h"
#include "CustomersListForm.h"
#include "SupplierForm.h"
#include "SupplierListForm.h"
#include "ProductsForm.h"
#include "ProductsListForm.h"
#include "PurchasesForm.h"
#include "PurchaseListForm.h"
#include "SellForm.h"
#include "SalesListForm.h"

namespace POS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Linq;
	using namespace Generic;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{

	private: Query^ query;
	public:
		MainForm(void)
		{
			InitializeComponent();
			
			query = gcnew Query;
			
		}	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:









	private: Bunifu::Framework::UI::BunifuFlatButton^ btnCustomersForm;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnViewPurchase;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnPurchaseForm;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnViewSales;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnSalesForm;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnViewProducts;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnProductsForm;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnViewSuppliers;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnSuppliersForm;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnViewCustomers;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->btnCustomersForm = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnViewPurchase = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnPurchaseForm = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnViewSales = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnSalesForm = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnViewProducts = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnProductsForm = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnViewSuppliers = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnSuppliersForm = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnViewCustomers = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCustomersForm
			// 
			this->btnCustomersForm->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnCustomersForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnCustomersForm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnCustomersForm->BorderRadius = 0;
			this->btnCustomersForm->ButtonText = L"Customers Form";
			this->btnCustomersForm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCustomersForm->DisabledColor = System::Drawing::Color::Gray;
			this->btnCustomersForm->Iconcolor = System::Drawing::Color::Transparent;
			this->btnCustomersForm->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCustomersForm.Iconimage")));
			this->btnCustomersForm->Iconimage_right = nullptr;
			this->btnCustomersForm->Iconimage_right_Selected = nullptr;
			this->btnCustomersForm->Iconimage_Selected = nullptr;
			this->btnCustomersForm->IconMarginLeft = 0;
			this->btnCustomersForm->IconMarginRight = 0;
			this->btnCustomersForm->IconRightVisible = true;
			this->btnCustomersForm->IconRightZoom = 0;
			this->btnCustomersForm->IconVisible = false;
			this->btnCustomersForm->IconZoom = 90;
			this->btnCustomersForm->IsTab = false;
			this->btnCustomersForm->Location = System::Drawing::Point(12, 53);
			this->btnCustomersForm->Name = L"btnCustomersForm";
			this->btnCustomersForm->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnCustomersForm->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnCustomersForm->OnHoverTextColor = System::Drawing::Color::White;
			this->btnCustomersForm->selected = false;
			this->btnCustomersForm->Size = System::Drawing::Size(207, 48);
			this->btnCustomersForm->TabIndex = 52;
			this->btnCustomersForm->Text = L"Customers Form";
			this->btnCustomersForm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnCustomersForm->Textcolor = System::Drawing::Color::White;
			this->btnCustomersForm->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnCustomersForm->Click += gcnew System::EventHandler(this, &MainForm::btnCustomersForm_Click);
			// 
			// btnViewPurchase
			// 
			this->btnViewPurchase->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnViewPurchase->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnViewPurchase->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnViewPurchase->BorderRadius = 0;
			this->btnViewPurchase->ButtonText = L"View Purchase";
			this->btnViewPurchase->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnViewPurchase->DisabledColor = System::Drawing::Color::Gray;
			this->btnViewPurchase->Iconcolor = System::Drawing::Color::Transparent;
			this->btnViewPurchase->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnViewPurchase.Iconimage")));
			this->btnViewPurchase->Iconimage_right = nullptr;
			this->btnViewPurchase->Iconimage_right_Selected = nullptr;
			this->btnViewPurchase->Iconimage_Selected = nullptr;
			this->btnViewPurchase->IconMarginLeft = 0;
			this->btnViewPurchase->IconMarginRight = 0;
			this->btnViewPurchase->IconRightVisible = true;
			this->btnViewPurchase->IconRightZoom = 0;
			this->btnViewPurchase->IconVisible = false;
			this->btnViewPurchase->IconZoom = 90;
			this->btnViewPurchase->IsTab = false;
			this->btnViewPurchase->Location = System::Drawing::Point(12, 575);
			this->btnViewPurchase->Name = L"btnViewPurchase";
			this->btnViewPurchase->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnViewPurchase->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnViewPurchase->OnHoverTextColor = System::Drawing::Color::White;
			this->btnViewPurchase->selected = false;
			this->btnViewPurchase->Size = System::Drawing::Size(207, 48);
			this->btnViewPurchase->TabIndex = 53;
			this->btnViewPurchase->Text = L"View Purchase";
			this->btnViewPurchase->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnViewPurchase->Textcolor = System::Drawing::Color::White;
			this->btnViewPurchase->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnViewPurchase->Click += gcnew System::EventHandler(this, &MainForm::btnViewPurchase_Click);
			// 
			// btnPurchaseForm
			// 
			this->btnPurchaseForm->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnPurchaseForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnPurchaseForm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPurchaseForm->BorderRadius = 0;
			this->btnPurchaseForm->ButtonText = L"Purchase Form";
			this->btnPurchaseForm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPurchaseForm->DisabledColor = System::Drawing::Color::Gray;
			this->btnPurchaseForm->Iconcolor = System::Drawing::Color::Transparent;
			this->btnPurchaseForm->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPurchaseForm.Iconimage")));
			this->btnPurchaseForm->Iconimage_right = nullptr;
			this->btnPurchaseForm->Iconimage_right_Selected = nullptr;
			this->btnPurchaseForm->Iconimage_Selected = nullptr;
			this->btnPurchaseForm->IconMarginLeft = 0;
			this->btnPurchaseForm->IconMarginRight = 0;
			this->btnPurchaseForm->IconRightVisible = true;
			this->btnPurchaseForm->IconRightZoom = 0;
			this->btnPurchaseForm->IconVisible = false;
			this->btnPurchaseForm->IconZoom = 90;
			this->btnPurchaseForm->IsTab = false;
			this->btnPurchaseForm->Location = System::Drawing::Point(12, 517);
			this->btnPurchaseForm->Name = L"btnPurchaseForm";
			this->btnPurchaseForm->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnPurchaseForm->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnPurchaseForm->OnHoverTextColor = System::Drawing::Color::White;
			this->btnPurchaseForm->selected = false;
			this->btnPurchaseForm->Size = System::Drawing::Size(207, 48);
			this->btnPurchaseForm->TabIndex = 54;
			this->btnPurchaseForm->Text = L"Purchase Form";
			this->btnPurchaseForm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnPurchaseForm->Textcolor = System::Drawing::Color::White;
			this->btnPurchaseForm->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnPurchaseForm->Click += gcnew System::EventHandler(this, &MainForm::btnPurchaseForm_Click);
			// 
			// btnViewSales
			// 
			this->btnViewSales->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnViewSales->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnViewSales->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnViewSales->BorderRadius = 0;
			this->btnViewSales->ButtonText = L"View Sales";
			this->btnViewSales->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnViewSales->DisabledColor = System::Drawing::Color::Gray;
			this->btnViewSales->Iconcolor = System::Drawing::Color::Transparent;
			this->btnViewSales->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnViewSales.Iconimage")));
			this->btnViewSales->Iconimage_right = nullptr;
			this->btnViewSales->Iconimage_right_Selected = nullptr;
			this->btnViewSales->Iconimage_Selected = nullptr;
			this->btnViewSales->IconMarginLeft = 0;
			this->btnViewSales->IconMarginRight = 0;
			this->btnViewSales->IconRightVisible = true;
			this->btnViewSales->IconRightZoom = 0;
			this->btnViewSales->IconVisible = false;
			this->btnViewSales->IconZoom = 90;
			this->btnViewSales->IsTab = false;
			this->btnViewSales->Location = System::Drawing::Point(12, 459);
			this->btnViewSales->Name = L"btnViewSales";
			this->btnViewSales->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnViewSales->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnViewSales->OnHoverTextColor = System::Drawing::Color::White;
			this->btnViewSales->selected = false;
			this->btnViewSales->Size = System::Drawing::Size(207, 48);
			this->btnViewSales->TabIndex = 55;
			this->btnViewSales->Text = L"View Sales";
			this->btnViewSales->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnViewSales->Textcolor = System::Drawing::Color::White;
			this->btnViewSales->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnViewSales->Click += gcnew System::EventHandler(this, &MainForm::btnViewSales_Click);
			// 
			// btnSalesForm
			// 
			this->btnSalesForm->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSalesForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSalesForm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSalesForm->BorderRadius = 0;
			this->btnSalesForm->ButtonText = L"Sales Form";
			this->btnSalesForm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSalesForm->DisabledColor = System::Drawing::Color::Gray;
			this->btnSalesForm->Iconcolor = System::Drawing::Color::Transparent;
			this->btnSalesForm->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSalesForm.Iconimage")));
			this->btnSalesForm->Iconimage_right = nullptr;
			this->btnSalesForm->Iconimage_right_Selected = nullptr;
			this->btnSalesForm->Iconimage_Selected = nullptr;
			this->btnSalesForm->IconMarginLeft = 0;
			this->btnSalesForm->IconMarginRight = 0;
			this->btnSalesForm->IconRightVisible = true;
			this->btnSalesForm->IconRightZoom = 0;
			this->btnSalesForm->IconVisible = false;
			this->btnSalesForm->IconZoom = 90;
			this->btnSalesForm->IsTab = false;
			this->btnSalesForm->Location = System::Drawing::Point(12, 401);
			this->btnSalesForm->Name = L"btnSalesForm";
			this->btnSalesForm->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSalesForm->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnSalesForm->OnHoverTextColor = System::Drawing::Color::White;
			this->btnSalesForm->selected = false;
			this->btnSalesForm->Size = System::Drawing::Size(207, 48);
			this->btnSalesForm->TabIndex = 56;
			this->btnSalesForm->Text = L"Sales Form";
			this->btnSalesForm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnSalesForm->Textcolor = System::Drawing::Color::White;
			this->btnSalesForm->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnSalesForm->Click += gcnew System::EventHandler(this, &MainForm::btnSalesForm_Click);
			// 
			// btnViewProducts
			// 
			this->btnViewProducts->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnViewProducts->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnViewProducts->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnViewProducts->BorderRadius = 0;
			this->btnViewProducts->ButtonText = L"View Products";
			this->btnViewProducts->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnViewProducts->DisabledColor = System::Drawing::Color::Gray;
			this->btnViewProducts->Iconcolor = System::Drawing::Color::Transparent;
			this->btnViewProducts->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnViewProducts.Iconimage")));
			this->btnViewProducts->Iconimage_right = nullptr;
			this->btnViewProducts->Iconimage_right_Selected = nullptr;
			this->btnViewProducts->Iconimage_Selected = nullptr;
			this->btnViewProducts->IconMarginLeft = 0;
			this->btnViewProducts->IconMarginRight = 0;
			this->btnViewProducts->IconRightVisible = true;
			this->btnViewProducts->IconRightZoom = 0;
			this->btnViewProducts->IconVisible = false;
			this->btnViewProducts->IconZoom = 90;
			this->btnViewProducts->IsTab = false;
			this->btnViewProducts->Location = System::Drawing::Point(12, 343);
			this->btnViewProducts->Name = L"btnViewProducts";
			this->btnViewProducts->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnViewProducts->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnViewProducts->OnHoverTextColor = System::Drawing::Color::White;
			this->btnViewProducts->selected = false;
			this->btnViewProducts->Size = System::Drawing::Size(207, 48);
			this->btnViewProducts->TabIndex = 57;
			this->btnViewProducts->Text = L"View Products";
			this->btnViewProducts->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnViewProducts->Textcolor = System::Drawing::Color::White;
			this->btnViewProducts->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnViewProducts->Click += gcnew System::EventHandler(this, &MainForm::btnViewProducts_Click);
			// 
			// btnProductsForm
			// 
			this->btnProductsForm->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnProductsForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnProductsForm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnProductsForm->BorderRadius = 0;
			this->btnProductsForm->ButtonText = L"Products Form";
			this->btnProductsForm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnProductsForm->DisabledColor = System::Drawing::Color::Gray;
			this->btnProductsForm->Iconcolor = System::Drawing::Color::Transparent;
			this->btnProductsForm->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnProductsForm.Iconimage")));
			this->btnProductsForm->Iconimage_right = nullptr;
			this->btnProductsForm->Iconimage_right_Selected = nullptr;
			this->btnProductsForm->Iconimage_Selected = nullptr;
			this->btnProductsForm->IconMarginLeft = 0;
			this->btnProductsForm->IconMarginRight = 0;
			this->btnProductsForm->IconRightVisible = true;
			this->btnProductsForm->IconRightZoom = 0;
			this->btnProductsForm->IconVisible = false;
			this->btnProductsForm->IconZoom = 90;
			this->btnProductsForm->IsTab = false;
			this->btnProductsForm->Location = System::Drawing::Point(12, 285);
			this->btnProductsForm->Name = L"btnProductsForm";
			this->btnProductsForm->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnProductsForm->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnProductsForm->OnHoverTextColor = System::Drawing::Color::White;
			this->btnProductsForm->selected = false;
			this->btnProductsForm->Size = System::Drawing::Size(207, 48);
			this->btnProductsForm->TabIndex = 58;
			this->btnProductsForm->Text = L"Products Form";
			this->btnProductsForm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnProductsForm->Textcolor = System::Drawing::Color::White;
			this->btnProductsForm->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnProductsForm->Click += gcnew System::EventHandler(this, &MainForm::btnProductsForm_Click);
			// 
			// btnViewSuppliers
			// 
			this->btnViewSuppliers->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnViewSuppliers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnViewSuppliers->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnViewSuppliers->BorderRadius = 0;
			this->btnViewSuppliers->ButtonText = L"Veiw Suppliers";
			this->btnViewSuppliers->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnViewSuppliers->DisabledColor = System::Drawing::Color::Gray;
			this->btnViewSuppliers->Iconcolor = System::Drawing::Color::Transparent;
			this->btnViewSuppliers->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnViewSuppliers.Iconimage")));
			this->btnViewSuppliers->Iconimage_right = nullptr;
			this->btnViewSuppliers->Iconimage_right_Selected = nullptr;
			this->btnViewSuppliers->Iconimage_Selected = nullptr;
			this->btnViewSuppliers->IconMarginLeft = 0;
			this->btnViewSuppliers->IconMarginRight = 0;
			this->btnViewSuppliers->IconRightVisible = true;
			this->btnViewSuppliers->IconRightZoom = 0;
			this->btnViewSuppliers->IconVisible = false;
			this->btnViewSuppliers->IconZoom = 90;
			this->btnViewSuppliers->IsTab = false;
			this->btnViewSuppliers->Location = System::Drawing::Point(12, 227);
			this->btnViewSuppliers->Name = L"btnViewSuppliers";
			this->btnViewSuppliers->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnViewSuppliers->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnViewSuppliers->OnHoverTextColor = System::Drawing::Color::White;
			this->btnViewSuppliers->selected = false;
			this->btnViewSuppliers->Size = System::Drawing::Size(207, 48);
			this->btnViewSuppliers->TabIndex = 59;
			this->btnViewSuppliers->Text = L"Veiw Suppliers";
			this->btnViewSuppliers->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnViewSuppliers->Textcolor = System::Drawing::Color::White;
			this->btnViewSuppliers->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnViewSuppliers->Click += gcnew System::EventHandler(this, &MainForm::btnViewSuppliers_Click);
			// 
			// btnSuppliersForm
			// 
			this->btnSuppliersForm->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSuppliersForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSuppliersForm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSuppliersForm->BorderRadius = 0;
			this->btnSuppliersForm->ButtonText = L"Supplier Form";
			this->btnSuppliersForm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSuppliersForm->DisabledColor = System::Drawing::Color::Gray;
			this->btnSuppliersForm->Iconcolor = System::Drawing::Color::Transparent;
			this->btnSuppliersForm->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSuppliersForm.Iconimage")));
			this->btnSuppliersForm->Iconimage_right = nullptr;
			this->btnSuppliersForm->Iconimage_right_Selected = nullptr;
			this->btnSuppliersForm->Iconimage_Selected = nullptr;
			this->btnSuppliersForm->IconMarginLeft = 0;
			this->btnSuppliersForm->IconMarginRight = 0;
			this->btnSuppliersForm->IconRightVisible = true;
			this->btnSuppliersForm->IconRightZoom = 0;
			this->btnSuppliersForm->IconVisible = false;
			this->btnSuppliersForm->IconZoom = 90;
			this->btnSuppliersForm->IsTab = false;
			this->btnSuppliersForm->Location = System::Drawing::Point(12, 169);
			this->btnSuppliersForm->Name = L"btnSuppliersForm";
			this->btnSuppliersForm->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSuppliersForm->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnSuppliersForm->OnHoverTextColor = System::Drawing::Color::White;
			this->btnSuppliersForm->selected = false;
			this->btnSuppliersForm->Size = System::Drawing::Size(207, 48);
			this->btnSuppliersForm->TabIndex = 60;
			this->btnSuppliersForm->Text = L"Supplier Form";
			this->btnSuppliersForm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnSuppliersForm->Textcolor = System::Drawing::Color::White;
			this->btnSuppliersForm->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnSuppliersForm->Click += gcnew System::EventHandler(this, &MainForm::btnSuppliersForm_Click);
			// 
			// btnViewCustomers
			// 
			this->btnViewCustomers->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnViewCustomers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnViewCustomers->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnViewCustomers->BorderRadius = 0;
			this->btnViewCustomers->ButtonText = L"View Customers";
			this->btnViewCustomers->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnViewCustomers->DisabledColor = System::Drawing::Color::Gray;
			this->btnViewCustomers->Iconcolor = System::Drawing::Color::Transparent;
			this->btnViewCustomers->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnViewCustomers.Iconimage")));
			this->btnViewCustomers->Iconimage_right = nullptr;
			this->btnViewCustomers->Iconimage_right_Selected = nullptr;
			this->btnViewCustomers->Iconimage_Selected = nullptr;
			this->btnViewCustomers->IconMarginLeft = 0;
			this->btnViewCustomers->IconMarginRight = 0;
			this->btnViewCustomers->IconRightVisible = true;
			this->btnViewCustomers->IconRightZoom = 0;
			this->btnViewCustomers->IconVisible = false;
			this->btnViewCustomers->IconZoom = 90;
			this->btnViewCustomers->IsTab = false;
			this->btnViewCustomers->Location = System::Drawing::Point(12, 111);
			this->btnViewCustomers->Name = L"btnViewCustomers";
			this->btnViewCustomers->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnViewCustomers->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnViewCustomers->OnHoverTextColor = System::Drawing::Color::White;
			this->btnViewCustomers->selected = false;
			this->btnViewCustomers->Size = System::Drawing::Size(207, 48);
			this->btnViewCustomers->TabIndex = 61;
			this->btnViewCustomers->Text = L"View Customers";
			this->btnViewCustomers->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnViewCustomers->Textcolor = System::Drawing::Color::White;
			this->btnViewCustomers->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnViewCustomers->Click += gcnew System::EventHandler(this, &MainForm::btnViewCustomers_Click);
			// 
			// chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(244, 53);
			this->chart->Name = L"chart";
			this->chart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart->Series->Add(series1);
			this->chart->Size = System::Drawing::Size(673, 570);
			this->chart->TabIndex = 62;
			this->chart->Text = L"Sales";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(966, 738);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->btnViewCustomers);
			this->Controls->Add(this->btnSuppliersForm);
			this->Controls->Add(this->btnViewSuppliers);
			this->Controls->Add(this->btnProductsForm);
			this->Controls->Add(this->btnViewProducts);
			this->Controls->Add(this->btnSalesForm);
			this->Controls->Add(this->btnViewSales);
			this->Controls->Add(this->btnPurchaseForm);
			this->Controls->Add(this->btnViewPurchase);
			this->Controls->Add(this->btnCustomersForm);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void btnCustomersForm_Click(System::Object^ sender, System::EventArgs^ e) 
{
	auto form = gcnew CustomersForm();
	form->Show();
}

private: System::Void btnViewCustomers_Click(System::Object^ sender, System::EventArgs^ e) 
{
	auto form = gcnew CustomersListForm();
	form->Show();
}

private: System::Void btnSuppliersForm_Click(System::Object^ sender, System::EventArgs^ e) 
{
	auto form = gcnew SupplierForm();
	form->Show();
}
private: System::Void btnViewSuppliers_Click(System::Object^ sender, System::EventArgs^ e) 
{
	auto form = gcnew SupplierListForm();
	form->Show();
}
private: System::Void btnProductsForm_Click(System::Object^ sender, System::EventArgs^ e) 
{
	auto form = gcnew ProductsForm();
	form->Show();
}
private: System::Void btnViewProducts_Click(System::Object^ sender, System::EventArgs^ e) 
{
	auto form = gcnew ProductsListForm();
	form->Show();
}
private: System::Void btnSalesForm_Click(System::Object^ sender, System::EventArgs^ e) 
{
	auto form = gcnew SellForm();
	form->Show();
}
private: System::Void btnViewSales_Click(System::Object^ sender, System::EventArgs^ e) 
{
	auto form = gcnew SalesListForm();
	form->Show();
}
private: System::Void btnPurchaseForm_Click(System::Object^ sender, System::EventArgs^ e) 
{
	auto form = gcnew PurchasesForm();
	form->Show();
}
private: System::Void btnViewPurchase_Click(System::Object^ sender, System::EventArgs^ e) 
{
	auto form = gcnew PurchaseListForm();
	form->Show();
}

private:
	void generateChart() 
	{
		chart->Series->Clear();
		chart->Series->Add("Sales");
		auto table =  query->fetchData("SELECT SUM(receivedAmount) AS amount, DATENAME(MONTH, Sales.saleDate) FROM Sales GROUP BY DATENAME(MONTH, saleDate)");
		for (int i = 0; i < table->Rows->Count; i++)
		{
			auto amount = table->Rows[i]->ItemArray[0];
			auto month = table->Rows[i]->ItemArray[1];

			chart->Series["Sales"]->Points->AddXY(month, amount);
		}
		
	}

private: System::Void btnCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnCustomerList_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSupplier_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSupplierList_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnProducts_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnProductList_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSaleForm_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnPurchase_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnPurchaseList_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSale_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	generateChart();
}
};
}
