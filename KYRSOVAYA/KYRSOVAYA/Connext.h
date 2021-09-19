#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;
ref class ConnectingBD
{

public:
	SqlConnection^ conn;
	SqlConnectionStringBuilder^ connstringbuilder;


	void connectBD() {
		//Data Source=TUPO;Initial Catalog="IOS Store";Integrated Security=True
		connstringbuilder = gcnew SqlConnectionStringBuilder();
		connstringbuilder->DataSource = "TUPO";
		connstringbuilder->InitialCatalog = "IOS Store";
		connstringbuilder->IntegratedSecurity = true;
		conn = gcnew SqlConnection(Convert::ToString(connstringbuilder));
	}
public:void Inser(String^ iPhone)
{
	try
	{
		connectBD();
		
		String^ cmdText = "INSERT INTO dbo.firststore(iPhone) VALUES()";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		SqlDataReader^ dr;
		cmd->Parameters->AddWithValue("@iPhoneVSTAVKA", iPhone);
			conn->Open();
			dr = cmd->ExecuteReader();
	}
	finally 
	{
		if (conn != nullptr) {
			conn->Close();
		}

	}
}







};
