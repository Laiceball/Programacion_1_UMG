Algoritmo UMG
	Definir nombreProfesor, nombreCurso, nombreEstudiante, continuar Como Cadena
	Definir parcial1, parcial2, zonaTareas, examenFinal, sumaPrevia, notaFinal Como Real
	Escribir 'SISTEMA DE CONTROL DE NOTAS'
	Escribir ''
	Escribir 'Ingrese su nombre (Docente): '
	Leer nombreProfesor
	Escribir 'Ingrese el nombre del curso: '
	Leer nombreCurso
	Escribir ''
	Escribir 'Bienvenido Inge ', nombreProfesor, ' - Curso: ', nombreCurso
	Escribir ''
	continuar <- 'S'
	Mientras continuar='S' O continuar='s' Hacer
		Escribir 'Ingrese el nombre del estudiante: '
		Leer nombreEstudiante
		Repetir
			Escribir 'Primer Parcial (0-20): '
			Leer parcial1
		Hasta Que parcial1>=0 Y parcial1<=20
		Repetir
			Escribir 'Segundo Parcial (0-25): '
			Leer parcial2
		Hasta Que parcial2>=0 Y parcial2<=25
		Repetir
			Escribir 'Zona de Tareas (0-20): '
			Leer zonaTareas
		Hasta Que zonaTareas>=0 Y zonaTareas<=20
		sumaPrevia <- parcial1+parcial2+zonaTareas
		Escribir ''
		Escribir 'Puntos acumulados: ', sumaPrevia
		Si sumaPrevia>=26 Entonces
			Escribir 'Califica para examen final'
			Repetir
				Escribir 'Examen Final (0-35): '
				Leer examenFinal
			Hasta Que examenFinal>=0 Y examenFinal<=35
			notaFinal <- sumaPrevia+examenFinal
			Escribir ''
			Escribir 'Estudiante: ', nombreEstudiante
			Escribir 'Nota Final: ', notaFinal
			Si notaFinal>=61 Entonces
				Escribir 'APROBADO'
			SiNo
				Escribir 'REPROBADO'
			FinSi
		SiNo
			Escribir 'NO califica para examen final (minimo 26 puntos)'
			Escribir 'Estudiante: ', nombreEstudiante
			Escribir 'REPROBADO'
		FinSi
		Escribir ''
		Escribir 'Ingresar otro estudiante? (S/N): '
		Leer continuar
		Escribir ''
	FinMientras
	Escribir 'Fin del programa'
FinAlgoritmo
