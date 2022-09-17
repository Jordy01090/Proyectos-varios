int buscar (char *cedula,pasajero *ciudadanos,int n){
	int i=0,bandera=0;
	int posicion=-1;
	for(i=0;i<n&&bandera==0;i++){
		if(strcmp(cedula,ciudadanos[i].cedula)==0){
			posicion=i;
			bandera=1;
		}
	}
	return posicion;
}
