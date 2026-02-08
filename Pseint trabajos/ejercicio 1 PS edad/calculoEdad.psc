Algoritmo calculoEdad
	definir fechaNacimiento, añoActual, edad Como Entero
	
	Escribir "Ingrese el año en que naciste: "
	leer fechaNacimiento
	Escribir "Ingrese año actual: "
	leer añoActual
	
	edad <- añoActual-fechaNacimiento
	
	Escribir "Tienes alrededor de: ", edad, " años"
FinAlgoritmo
