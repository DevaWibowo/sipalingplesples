#pragma once
#include "Material.h"

Material::Material(int id, string nama, int amount) : ID(id), Nama(nama), Amount(amount){
	
}
void Material::TambahAmount(int amount){
	this->Amount += amount;
}
void Material::KurangAmount(int amount){
	this->Amount -= amount;
}
int Material::GetAmount(){
	return this->Amount;
}
