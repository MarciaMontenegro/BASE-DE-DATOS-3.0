#ifndef VOUCHER_H
#define VOUCHER_H

class voucher{
	public:
		int voucherID;
		int cuarto;
		float precio_a_pagar;
		bool debe;
		voucher();
		voucher(int cuarto, float precio_a_pagar);
		~voucher();
		void set_voucherID(int voucherID);
		void set_pago(double pago);
	protected:
};



#endif
