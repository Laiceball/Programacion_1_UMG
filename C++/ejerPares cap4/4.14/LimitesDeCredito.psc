Proceso LimitesDeCredito
	
	Definir cuenta Como Entero
	Definir saldoInicial, cargos, creditos, limiteCredito, nuevoSaldo Como Real
	
	Escribir "Introduzca el numero de cuenta (ó -1 para salir): "
	Leer cuenta
	
	Mientras cuenta <> -1 Hacer
		Escribir "Introduzca el saldo inicial: "
		Leer saldoInicial
		
		Escribir "Introduzca los cargos totales: "
		Leer cargos
		
		Escribir "Introduzca los creditos totales: "
		Leer creditos
		
		Escribir "Introduzca el limite de credito: "
		Leer limiteCredito
		
		nuevoSaldo = saldoInicial + cargos - creditos
		
		Escribir "El nuevo saldo es ", nuevoSaldo
		
		Si nuevoSaldo > limiteCredito Entonces
			Escribir "Cuenta:          ", cuenta
			Escribir "Limite de credito: ", limiteCredito
			Escribir "Saldo:           ", nuevoSaldo
			Escribir "Se excedio el limite de su credito."
		FinSi
		
		Escribir ""
		Escribir "Introduzca el numero de cuenta (ó -1 para salir): "
		Leer cuenta
		
	FinMientras	
FinProceso