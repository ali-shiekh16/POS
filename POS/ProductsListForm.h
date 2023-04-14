
namespace POS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProductsListForm
	/// </summary>
	public ref class ProductsListForm : public System::Windows::Forms::Form
	{
	public:
		ProductsListForm(void)
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
		~ProductsListForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtSearch;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^ table;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->txtSearch = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->table = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			this->SuspendLayout();
			// 
			// txtSearch
			// 
			this->txtSearch->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtSearch->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtSearch->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtSearch->BorderThickness = 3;
			this->txtSearch->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->txtSearch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtSearch->isPassword = false;
			this->txtSearch->Location = System::Drawing::Point(59, 61);
			this->txtSearch->Margin = System::Windows::Forms::Padding(4);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txtSearch->Size = System::Drawing::Size(682, 38);
			this->txtSearch->TabIndex = 6;
			this->txtSearch->Text = L"Search Here";
			this->txtSearch->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
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
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table->DoubleBuffered = true;
			this->table->EnableHeadersVisualStyles = false;
			this->table->HeaderBgColor = System::Drawing::Color::SeaGreen;
			this->table->HeaderForeColor = System::Drawing::Color::SeaGreen;
			this->table->Location = System::Drawing::Point(59, 114);
			this->table->Margin = System::Windows::Forms::Padding(2);
			this->table->Name = L"table";
			this->table->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->table->RowHeadersWidth = 62;
			this->table->RowTemplate->Height = 28;
			this->table->Size = System::Drawing::Size(682, 255);
			this->table->TabIndex = 5;
			// 
			// ProductsListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 393);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->table);
			this->Name = L"ProductsListForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Products List";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
