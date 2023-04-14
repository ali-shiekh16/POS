#pragma once

ref class Query
{
public:
	Query();
	bool exec(System::String^);
	System::Data::DataTable^ fetchData(System::String^);

private:
	System::Data::SqlClient::SqlConnection^ sqlConnection;
	System::String^ connectionString = "Data Source=DESKTOP-RF2L792\\SQLEXPRESS;Initial Catalog=POS;Integrated Security=True";
	
};

