Algoritmo ejercicio01
	Definir monto_compra, bolita Como Entero // int monto_compra
	Definir nuevo_monto Como Real
	Escribir "Ingrese su monto de compra" //cout <<
	Leer monto_compra // cin >> monto_compra
	Si monto_compra < 100 Entonces
		Escribir "Para el otro año sera :)"
	FinSi
		Escribir " Ingrese un numero "
		Leer bolita
		Si bolita < 1 o bolita > 5
			Escribir "Seleccione un numero valido"
		SiNo
			Si bolita = 1
				porcentaje = 0
			SiNo
				Si bolita = 2
					porcentaje = 10
				SiNo
					Si bolita = 3
						porcentaje = 20
					SiNo
						Si bolita = 4
							porcentaje = 25
						SiNo
							porcentaje = 50
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
		nuevo_monto = monto_compra - (monto_compra * porcentaje/100)
		Escribir "Nuevo monto a pagar ",nuevo_monto
FinAlgoritmo
