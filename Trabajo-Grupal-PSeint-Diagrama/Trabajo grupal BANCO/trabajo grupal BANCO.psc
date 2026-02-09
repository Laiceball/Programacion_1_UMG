Algoritmo Ejercicio2
	Definir nombre, opc Como Caracter
	Definir saldoI, saldoF, Deposito, Retiro, totalDep, totalRet, DepEfec, DepCheq Como Real
	Definir cantDep, cantRet Como Caracter
	Definir i Como Entero
	
	i<-0
	nombre<-''
	saldoI<-0
	saldoF<-saldoI
	cantDep<-''
	DepEfec<-0
	DepCheq<-0
	totalDep<-0
	cantRet<-''
	totalRet<-0
	
	Escribir 'Ingrese usuario:: '
	Leer nombre
	Escribir 'Saldo Inicial:: '
	Leer saldoI
	saldoF <- saldoI
	
	Repetir
		Escribir 'operacion que desea recibir:: '
		Escribir '(D) Deposito'
		Escribir '(R) Retiro'
		Escribir '(F) Fin'
		Leer opc
		
		si opc="D" o opc="d" Entonces
			Escribir '(1) Efectivo'
			Escribir '(2) Cheque'
			Leer opc
			
			si opc='1' Entonces
				Escribir 'Ingrese monto'
				Leer Deposito
				Escribir 'Operación exitosa'
				Escribir 'Monto depositado: ', Deposito
				cantDep=cantDep+ConvertirATexto(Deposito)+',  '
				DepEfec=DepEfec+Deposito
				saldoF=saldoF+Deposito
			FinSi
			
			si opc='2' Entonces
				Escribir 'Ingrese monto de Cheque'
				Leer Deposito
				Escribir 'se le descontara un 1% de comisión'
				Escribir 'Operación exitosa'
				Escribir 'Monto depositado: ', (Deposito- (Deposito*0.01))
				cantDep=cantDep+ConvertirATexto(Deposito- (Deposito*0.01))+',  '
				DepCheq=DepCheq+(Deposito- (Deposito*0.01))
				saldoF=saldoF+(Deposito-(Deposito*0.01))
			FinSi
			
			totalDep = DepEfec + DepCheq
		FinSi
		
		si opc = 'R' o opc='r' Entonces
			Escribir 'Ingrese la cantidad que desea retirar:: '
			Leer Retiro
			
			si Retiro <= saldoF Entonces
				Escribir 'Operación exitosa'
				Escribir 'Monto Retirado: ', Retiro
				cantRet=cantRet+ConvertirATexto(Retiro)+',  '
				i=i+1
				totalRet=totalRet+Retiro
				saldoF=saldoF-Retiro
			SiNo
				Escribir 'Sobregiro - Saldo insuficiente'
			FinSi
		FinSi
		
		si opc='F' o opc='f' Entonces
			Escribir 'Nombre: ', nombre
			Escribir 'Saldo Inicial: ', saldoI
			Escribir 'Saldo Final: ', saldoF
			Escribir 'Depositos: ', cantDep
			Escribir 'Depositos efectivo: ', DepEfec
			Escribir 'Depositos Cheque: ', DepCheq
			Escribir 'Total Depositos: ', totalDep
			Escribir 'Retiros: ', cantRet
			Escribir 'Total Retiro: ', totalRet
			si i>0 Entonces
				Escribir 'Promedio de retiros: ', totalRet/i
			FinSi
		FinSi
		
	Hasta Que opc='F' o opc='f'
FinAlgoritmo
