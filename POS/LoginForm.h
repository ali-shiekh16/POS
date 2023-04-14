

namespace POS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnSubmit;
	protected:
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtPassword;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel2;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtEmail;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ label;

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
			this->btnSubmit = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->txtPassword = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->txtEmail = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->label = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->SuspendLayout();
			// 
			// btnSubmit
			// 
			this->btnSubmit->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSubmit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSubmit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSubmit->BorderRadius = 0;
			this->btnSubmit->ButtonText = L"Sign In";
			this->btnSubmit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSubmit->DisabledColor = System::Drawing::Color::Gray;
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubmit->ForeColor = System::Drawing::SystemColors::Control;
			this->btnSubmit->Iconcolor = System::Drawing::Color::Transparent;
			this->btnSubmit->Iconimage = nullptr;
			this->btnSubmit->Iconimage_right = nullptr;
			this->btnSubmit->Iconimage_right_Selected = nullptr;
			this->btnSubmit->Iconimage_Selected = nullptr;
			this->btnSubmit->IconMarginLeft = 0;
			this->btnSubmit->IconMarginRight = 0;
			this->btnSubmit->IconRightVisible = true;
			this->btnSubmit->IconRightZoom = 0;
			this->btnSubmit->IconVisible = false;
			this->btnSubmit->IconZoom = 90;
			this->btnSubmit->IsTab = false;
			this->btnSubmit->Location = System::Drawing::Point(38, 354);
			this->btnSubmit->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSubmit->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnSubmit->OnHoverTextColor = System::Drawing::Color::White;
			this->btnSubmit->selected = false;
			this->btnSubmit->Size = System::Drawing::Size(303, 48);
			this->btnSubmit->TabIndex = 13;
			this->btnSubmit->Text = L"Sign In";
			this->btnSubmit->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnSubmit->Textcolor = System::Drawing::Color::White;
			this->btnSubmit->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			// 
			// txtPassword
			// 
			this->txtPassword->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtPassword->BorderColorIdle = System::Drawing::Color::Gray;
			this->txtPassword->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtPassword->BorderThickness = 3;
			this->txtPassword->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtPassword->ForeColor = System::Drawing::Color::Silver;
			this->txtPassword->isPassword = true;
			this->txtPassword->Location = System::Drawing::Point(38, 290);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(303, 36);
			this->txtPassword->TabIndex = 12;
			this->txtPassword->Text = L"***********";
			this->txtPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->Location = System::Drawing::Point(34, 266);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(70, 20);
			this->bunifuCustomLabel2->TabIndex = 11;
			this->bunifuCustomLabel2->Text = L"Password";
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->Location = System::Drawing::Point(34, 190);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(46, 20);
			this->bunifuCustomLabel1->TabIndex = 10;
			this->bunifuCustomLabel1->Text = L"Email";
			// 
			// txtEmail
			// 
			this->txtEmail->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtEmail->BorderColorIdle = System::Drawing::Color::Gray;
			this->txtEmail->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtEmail->BorderThickness = 3;
			this->txtEmail->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->ForeColor = System::Drawing::Color::Silver;
			this->txtEmail->isPassword = false;
			this->txtEmail->Location = System::Drawing::Point(38, 214);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(303, 36);
			this->txtEmail->TabIndex = 9;
			this->txtEmail->Text = L"ex: email@yahoo.com";
			this->txtEmail->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->Location = System::Drawing::Point(118, 88);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(143, 50);
			this->label->TabIndex = 8;
			this->label->Text = L"Sign In";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(404, 507);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->bunifuCustomLabel2);
			this->Controls->Add(this->bunifuCustomLabel1);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->label);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign in";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
