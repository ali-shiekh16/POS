#include "ProductInfo.h"

ProductInfo::ProductInfo(String^ productName, int productId, double unitCost, int qty)
	: productName{ productName }, productId{ productId }, unitCost{ unitCost }, qty{ qty }
{}

ProductInfo::ProductInfo(String^ productName, int productId, double unitCost, int qty, double unitPrice, int stock)
	: productName{ productName }, productId{ productId }, unitCost{ unitCost }, qty{ qty }, unitPrice{ unitPrice }, remaningStock{remaningStock}
{}
