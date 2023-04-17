#pragma once

#include "Query.h"
#include "CustomersForm.h"
#include "CustomersListForm.h"
#include "SupplierForm.h"
#include "SupplierListForm.h"

namespace POS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Linq;
	using namespace Generic;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			
			//TODO: Add the constructor code here
			/*Query query;
			auto result = query.exec("INSERT INTO Roles(name) VALUES ('Demo Demo Demo role');");
			MessageBox::Show(result.ToString());*/
			
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
	private: System::Windows::Forms::Button^ btnCustomer;
	protected:
	private: System::Windows::Forms::Button^ btnCustomerList;
	private: System::Windows::Forms::Button^ btnSupplier;
	private: System::Windows::Forms::Button^ btnSupplierList;
	private: System::Windows::Forms::Button^ button5;

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
			this->btnCustomer = (gcnew System::Windows::Forms::Button());
			this->btnCustomerList = (gcnew System::Windows::Forms::Button());
			this->btnSupplier = (gcnew System::Windows::Forms::Button());
			this->btnSupplierList = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnCustomer
			// 
			this->btnCustomer->Location = System::Drawing::Point(69, 51);
			this->btnCustomer->Name = L"btnCustomer";
			this->btnCustomer->Size = System::Drawing::Size(75, 23);
			this->btnCustomer->TabIndex = 0;
			this->btnCustomer->Text = L"Customers";
			this->btnCustomer->UseVisualStyleBackColor = true;
			this->btnCustomer->Click += gcnew System::EventHandler(this, &MainForm::btnCustomer_Click);
			// 
			// btnCustomerList
			// 
			this->btnCustomerList->Location = System::Drawing::Point(69, 80);
			this->btnCustomerList->Name = L"btnCustomerList";
			this->btnCustomerList->Size = System::Drawing::Size(99, 23);
			this->btnCustomerList->TabIndex = 1;
			this->btnCustomerList->Text = L"CustomersList";
			this->btnCustomerList->UseVisualStyleBackColor = true;
			this->btnCustomerList->Click += gcnew System::EventHandler(this, &MainForm::btnCustomerList_Click);
			// 
			// btnSupplier
			// 
			this->btnSupplier->Location = System::Drawing::Point(69, 109);
			this->btnSupplier->Name = L"btnSupplier";
			this->btnSupplier->Size = System::Drawing::Size(75, 23);
			this->btnSupplier->TabIndex = 2;
			this->btnSupplier->Text = L"Supplier";
			this->btnSupplier->UseVisualStyleBackColor = true;
			this->btnSupplier->Click += gcnew System::EventHandler(this, &MainForm::btnSupplier_Click);
			// 
			// btnSupplierList
			// 
			this->btnSupplierList->Location = System::Drawing::Point(69, 138);
			this->btnSupplierList->Name = L"btnSupplierList";
			this->btnSupplierList->Size = System::Drawing::Size(75, 23);
			this->btnSupplierList->TabIndex = 3;
			this->btnSupplierList->Text = L"supplierList";
			this->btnSupplierList->UseVisualStyleBackColor = true;
			this->btnSupplierList->Click += gcnew System::EventHandler(this, &MainForm::btnSupplierList_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(69, 167);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btnSupplierList);
			this->Controls->Add(this->btnSupplier);
			this->Controls->Add(this->btnCustomerList);
			this->Controls->Add(this->btnCustomer);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
		auto form = gcnew CustomersForm();
		form->Show();
	}

	private: System::Void btnCustomerList_Click(System::Object^ sender, System::EventArgs^ e) {
		auto form = gcnew CustomersListForm();
		form->Show();
	}


	private: System::Void btnSupplier_Click(System::Object^ sender, System::EventArgs^ e) {
		auto form = gcnew SupplierForm();
		form->Show();
	}
	private: System::Void btnSupplierList_Click(System::Object^ sender, System::EventArgs^ e) {
		auto form = gcnew SupplierListForm();
		form->Show();
	}
};
}
