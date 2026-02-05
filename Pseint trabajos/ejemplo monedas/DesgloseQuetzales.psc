Algoritmo DesgloseQuetzales
	Definir cantidad, ValEnteros, ValDecimales Como Real
	Definir Q200, Q100, Q50, Q20, Q10, Q5, Q1, cent050, cent025, cent010, cent005, cent001 Como Entero
	Escribir 'Ingrese monto en quetzales: '
	Leer cantidad
	ValEnteros <- Trunc(cantidad)
	ValDecimales <- cantidad-ValEnteros
	ValDecimales <- Redon(ValDecimales*100)
	
	// descomposicion monto
	Q200 <- Desglosar(ValEnteros,200,ValEnteros)
	Q100 <- Desglosar(ValEnteros,100,ValEnteros)
	Q50 <- Desglosar(ValEnteros,50,ValEnteros)
	Q20 <- Desglosar(ValEnteros,20,ValEnteros)
	Q10 <- Desglosar(ValEnteros,10,ValEnteros)
	Q5 <- Desglosar(ValEnteros,5,ValEnteros)
	Q1 <- Desglosar(ValEnteros,1,ValEnteros)
	cent050 <- Desglosar(ValDecimales,50,ValDecimales)
	cent025 <- Desglosar(ValDecimales,25,ValDecimales)
	cent010 <- Desglosar(ValDecimales,10,ValDecimales)
	cent005 <- Desglosar(ValDecimales,5,ValDecimales)
	cent001 <- Desglosar(ValDecimales,1,ValDecimales)
	
	// Mostrar resultados
	Escribir 'Billetes de Q200: ', Q200
	Escribir 'Billetes de Q100: ', Q100
	Escribir 'Billetes de Q50: ', Q50
	Escribir 'Billetes de Q20: ', Q20
	Escribir 'Billetes de Q10: ', Q10
	Escribir 'Billetes de Q5: ', Q5
	Escribir 'Monedas de Q1: ', Q1
	Escribir 'Monedas de Q0.50: ', cent050
	Escribir 'Monedas de Q0.25: ', cent025
	Escribir 'Monedas de Q0.10: ', cent010
	Escribir 'Monedas de Q0.05: ', cent005
	Escribir 'Monedas de Q0.01: ', cent001
FinAlgoritmo

// funcion Desglosar
Función resultado <- Desglosar(cantidad,denominacion,residuo Por Referencia)
	resultado <- Trunc(cantidad/denominacion)
	residuo <- cantidad MOD denominacion
FinFunción
