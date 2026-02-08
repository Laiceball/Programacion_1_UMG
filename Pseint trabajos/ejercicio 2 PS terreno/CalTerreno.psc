Algoritmo CalTerreno
	Definir ancho, largo, area, Qmetro, precioTotal, alambres Como Real
	Escribir 'Ingresa el ancho del terreno (en metros):'
	Leer ancho
	Escribir 'Ingresa el largo del terreno (en metros):'
	Leer largo
	Escribir 'Ingresa el precio por metro cuadrado:'
	Leer Qmetro
	area <- ancho*largo
	precioTotal <- area*Qmetro
	alambres <- (ancho+largo)*2*3
	Escribir 'el area del terreno es: ', area, ' metros cuadrados'
	Escribir 'El precio del terreno es: Q', precioTotal
	Escribir 'Cantidad de alambre necesaria: ', alambres, ' metros'
FinAlgoritmo
