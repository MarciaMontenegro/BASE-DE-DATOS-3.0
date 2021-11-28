#include "voucher.h"

voucher::voucher(){
}

voucher::voucher(int _cuarto, float _precio_a_pagar){
	precio_a_pagar=_precio_a_pagar;
}

voucher::~voucher(){
}

void voucher::set_voucherID(int _voucherID){
	voucherID=_voucherID;
}

void voucher::set_pago(double _pago){
	precio_a_pagar=precio_a_pagar - _pago;
}
