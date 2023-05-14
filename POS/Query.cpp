#include "Query.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;

bool Query::exec(String^ query)
{
    sqlConnection->Open();
    auto command = gcnew SqlCommand(query, sqlConnection);
    auto result = command->ExecuteNonQuery();
    sqlConnection->Close();
    return result;
}

DataTable^ Query::fetchData(String^ query)
{
    DataTable^ table;

    try 
    {
        sqlConnection->Open();
        auto adapter = gcnew SqlDataAdapter(query, sqlConnection);

        table = gcnew DataTable();

        adapter->Fill(table);
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
    finally 
    {
        sqlConnection->Close();
    }

    return table;
}


Query::Query() 
{
    sqlConnection = gcnew SqlClient::SqlConnection(Query::connectionString);
}

