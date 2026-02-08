Algoritmo AporteSindical
	Definir edad, sueldo Como Real
	Definir porcentaje, aporte Como Real
	Escribir 'edad del empleado:'
	Leer edad
	Escribir 'Ingresa el sueldo anual en dólares:'
	Leer sueldo
	Si sueldo<10000 Entonces
		porcentaje <- 0.5
	SiNo
		Si sueldo>=10000 Y sueldo<=19999 Entonces
			porcentaje <- 1
		SiNo
			Si sueldo>=20000 Y sueldo<=29999 Entonces
				porcentaje <- 2
			SiNo
				porcentaje <- 2.5
			FinSi
		FinSi
	FinSi
	aporte <- sueldo*(porcentaje/100)
	Si edad<=30 Entonces
		aporte <- aporte+(aporte*0.20)
	FinSi
	Escribir 'El aporte al sindicato es: $', aporte
FinAlgoritmo
