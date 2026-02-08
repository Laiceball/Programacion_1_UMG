Algoritmo cicloDia
	Definir hora Como Entero
	Escribir 'Ingresa la hora (entre 0 y 23):'
	Leer hora
	Si hora<0 O hora>23 Entonces
		Escribir 'Error: La hora debe estar en el rango indicado'
	SiNo
		Según hora Hacer
			0, 1, 2, 3, 4, 5:
				Escribir 'Madrugada'
			6, 7, 8, 9, 10, 11:
				Escribir 'Mañana'
			12, 13:
				Escribir 'Mediodia'
			14, 15, 16, 17, 18, 19:
				Escribir 'Tarde'
			20, 21, 22, 23:
				Escribir 'Noche'
		FinSegún
	FinSi
FinAlgoritmo
