#include "Query.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

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
    sqlConnection->Open();
    auto adapter = gcnew SqlDataAdapter(query, sqlConnection);
    auto table = gcnew DataTable();
    adapter->Fill(table);
    sqlConnection->Close();

    return table;
}


Query::Query() {
    sqlConnection = gcnew SqlClient::SqlConnection(Query::connectionString);
}

