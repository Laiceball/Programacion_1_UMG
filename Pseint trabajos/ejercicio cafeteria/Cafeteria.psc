Algoritmo Cafeteria
    Definir opcion, cantidad, precioUnitario, total Como Entero
    Definir continuar Como Caracter
    
    total <- 0
    continuar <- "S"
    
    Mientras continuar = "S" Hacer
        Escribir "Menú:"
        Escribir "1. Café.....Q10"
        Escribir "2. Panito...Q5"
        Escribir "3. Licuado..Q15"
        
        Escribir "Ingrese el número de producto:"
        Leer opcion
        
        Escribir "Ingrese la cantidad:"
        Leer cantidad
        
        Segun opcion Hacer
            1: precioUnitario <- 10
            2: precioUnitario <- 5
            3: precioUnitario <- 15
            De Otro Modo:
                precioUnitario <- 0
                Escribir "Opción inválida"
        FinSegun
        
        total <- total + (precioUnitario * cantidad)
        
        Escribir "¿Desea algo mas de nuestro menu? (S/N)"
        Leer continuar
    FinMientras
    
    Escribir "El total a pagar es: Q", total
FinAlgoritmo