#pragma once
using namespace System;

ref class ProductInfo
{
public:
	ProductInfo(String^ productName, int productId, double unitCost, int qty);
	ProductInfo(String^ productName, int productId, double unitCost, int qty, double unitPrice, int remaningStock);

		String^ productName;

		int productId;
		int qty;
		int remaningStock;

		double unitCost;
		double unitPrice;
};


