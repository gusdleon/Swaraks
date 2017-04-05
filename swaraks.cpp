//trabajo final de programacion
//tienda la uanl
#include <iostream>
#include <string>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main(){
    int cont=0, opcion=0, cuantos=0, producto=0, producto2=0, tortillas=10, leche=11, sabritas=6, pepsi=17, pecsi=15, carne=50, pollo=55, cafe=13, koolaid=2, axe=45, cuantos2=0,cuantos3=0, ganancia=0, perdida=0, sivendidos=0; //VARIABLES COMO CONTADORES Y PRECIOS DE PRODUCTOS
string si, key2, op, key="pasword",valor, menosven;  // VARIABLES COMO CONTRASEÑA Y PRODUCTOS MAS Y MENOS VENDIDOS  SI = ESTA CONDICION TERMINA UNA COMPRA Y REINICIA CONTADORES; KEY2 = CONTRASEÑA INGRESADA POR EL USUARIO;  OP = REGRESO AL MENU PRINCIPAL; KEY = CONTRESEÑA DEL PROGRAMA; IMPRIME EL PRODUCTO MAS VENDIDO; MENOSVEN = IMPRIME EL MENOS VENDIDO
do{ //ACCESO AL PROGRAMA (INGRESO DE CONTRASEÑA)
cout<<"Introdusca la contraseña para ingresar a la cuenta"<<endl;
cin>>key2;
system("cls");
if(key2!=key){
    cout<<"\a\a\a";
    cout<<"Contraseña Incorrecta\n";
    cont++;
    if(cont>=3){
        cout<<"numero de intentos superado";
        return 0;
    }
}
}while(key2!=key);
while(opcion!=6){// AQUI EMPIESA EL VERDADERO PROGRAMA
//menu principal
    cout<<"                  °°°°°°°°°°°°MENU°°°°°°°°°°°\n\n";
    cout<<"                  ¿Que desea hacer?             "<<endl;
    cout<<"                  1.-Articulos comprados        "<<endl;
    cout<<"                  2.-Artiulos vendidos          "<<endl;
    cout<<"                  3.-Ganancias                  "<<endl;
    cout<<"                  4.-Articulos mas vendidos      "<<endl;
    cout<<"                  5.-Articulos menos vendidos    "<<endl;
    cout<<"                  6.-Salir                      "<<endl;
    cin>>opcion;
if(opcion==1){// COMPRA DE UN PRODUCTO (CLIENTE A LA TIENDA)
    sivendidos++;
    cout<<"                °°°°°°°°°°°°Catalogo°°°°°°°°°°°°\n\n";
    cout<<"\t\tTortillas- $10\n\t\tLeche- $11\n\t\tSabritas- $6\n\t\tPepsi- $17\n\t\tPecsi- $15\n\t\tCarne- $50\n\t\tPollo- $55\n\t\tCafe- $13\n\t\tKoolaid- $2\n\t\tAxe- $45\n\n";
    do{
        cout<<"\ncuanto de tortillas\n";
    cin>>cuantos;
    producto=producto+tortillas*cuantos;
    cout<<"Tortillas: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto<<endl;
    if(cuantos>cuantos2){
        cuantos2=cuantos;
        valor="tortillas";
    }
    cuantos3=cuantos;
    menosven="tortillas";
    cout<<"\ncuanto de pepsi\n";
    cin>>cuantos;
    producto=producto+pepsi*cuantos;
    cout<<"Pepsi: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto<<endl;
    if(cuantos==cuantos2){
        valor="pepsi, "+valor;
    }
    if(cuantos==cuantos3){
        menosven="pepsi, "+menosven;
    }
        if(cuantos>cuantos2){
        cuantos2=cuantos;
        valor="pepsi";
    } if(cuantos<cuantos3){
    cuantos3=cuantos;
    menosven="pepsi";
    }
    cout<<"\ncuanto de pecsi\n";
    cin>>cuantos;
    producto=producto+pecsi*cuantos;
    cout<<"Pecsi: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto<<endl;
    if(cuantos==cuantos2){
        valor="pecsi, "+valor;
    }
    if(cuantos==cuantos3){
        menosven="pecsi, "+menosven;
    }
        if(cuantos>cuantos2){
        cuantos2=cuantos;
        valor="pecsi";
    } if(cuantos<cuantos3){
    cuantos3=cuantos;
    menosven="pecsi";
    }
    cout<<"\ncuanto de leche\n";
    cin>>cuantos;
    producto=producto+leche*cuantos;
    cout<<"Leche: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto<<endl;
    if(cuantos==cuantos2){
        valor="leche, "+valor;
    }
    if(cuantos==cuantos3){
        menosven="leche, "+menosven;
    }
        if(cuantos>cuantos2){
        cuantos2=cuantos;
        valor="leche";
    } if(cuantos<cuantos3){
    cuantos3=cuantos;
    menosven="leche";
    }
    cout<<"\ncuanto de axe\n";
    cin>>cuantos;
    producto=producto+axe*cuantos;
    cout<<"Axe: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto<<endl;
    if(cuantos==cuantos2){
        valor="axe, "+valor;
    }
    if(cuantos==cuantos3){
        menosven="axe, "+menosven;
    }
    if(cuantos>cuantos2){
        cuantos2=cuantos;
        valor="axe";
    } if(cuantos<cuantos3){
    cuantos3=cuantos;
    menosven="axe";
    }
    cout<<"\ncuanto de sabritas\n";
    cin>>cuantos;
    producto=producto+pepsi*cuantos;
    cout<<"Sabritas: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto<<endl;
    if(cuantos==cuantos2){
        valor="sabritas, "+valor;
    }
    if(cuantos==cuantos3){
        menosven="sabritas, "+menosven;
    }
        if(cuantos>cuantos2){
        cuantos2=cuantos;
        valor="sabritas";
    } if(cuantos<cuantos3){
    cuantos3=cuantos;
    menosven="sabritas";
    }
    cout<<"\ncuanto de carne\n";
    cin>>cuantos;
    producto=producto+carne*cuantos;
    cout<<"Carne: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto<<endl;
    if(cuantos==cuantos2){
        valor="carne, "+valor;
    }
    if(cuantos==cuantos3){
        menosven="carne, "+menosven;
    }
        if(cuantos>cuantos2){
        cuantos2=cuantos;
        valor="carne";
    } if(cuantos<cuantos3){
    cuantos3=cuantos;
    menosven="carne";
    }
    cout<<"\ncuanto de pollo\n";
    cin>>cuantos;
    producto=producto+pollo*cuantos;
    cout<<"Pollo: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto<<endl;
    if(cuantos==cuantos2){
        valor="pollo, "+valor;
    }
    if(cuantos==cuantos3){
        menosven="pollo, "+menosven;
    }
        if(cuantos>cuantos2){
        cuantos2=cuantos;
        valor="pollo";
    } if(cuantos<cuantos3){
    cuantos3=cuantos;
    menosven="pollo";
    }
    cout<<"\ncuanto de cafe\n";
    cin>>cuantos;
    producto=producto+cafe*cuantos;
    cout<<"Cafe: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto<<endl;
    if(cuantos==cuantos2){
        valor="cafe, "+valor;
    }
    if(cuantos==cuantos3){
        menosven="cafe, "+menosven;
    }
        if(cuantos>cuantos2){
        cuantos2=cuantos;
        valor="cafe";
    } if(cuantos<cuantos3){
    cuantos3=cuantos;
    menosven="cafe";
    }
    cout<<"\ncuanto de koolaid\n";
    cin>>cuantos;
    producto=producto+koolaid*cuantos;
    cout<<"Koolaid: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto<<endl;
    if(cuantos==cuantos2){
        valor="koolaid, "+valor;
    }
    if(cuantos==cuantos3){
        menosven="koolaid, "+menosven;
    }
    if(cuantos>cuantos2){
        cuantos2=cuantos;
        valor="koolaid";
    } if(cuantos<cuantos3){
    cuantos3=cuantos;
    menosven="koolaid";
    }
    cout<<"¿desea regresar al menu(s/n)\n";
    cin>>op;
    }while(op=="n");
    cout<<"total a pagar = $"<<producto<<endl;
    ganancia=producto;
    }
    if(opcion==2){// COMPRA DE UN PRODUCTO (TIENDA AL PROVEEDOR)
        cout<<"                °°°°°°°°°°°°Catalogo°°°°°°°°°°°°\n\n";
    cout<<"\t\tTortillas- $10\n\t\tLeche- $11\n\t\tSabritas- $6\n\t\tPepsi- $17\n\t\tPecsi- $15\n\t\tCarne- $50\n\t\tPollo- $55\n\t\tCafe- $13\n\t\tKoolaid- $2\n\t\tAxe- $45\n\n";
    do{
    cout<<"cuanto de tortillas\n";
    cin>>cuantos;
    producto2=producto2+tortillas*cuantos;
    cout<<"Tortillas: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto2<<endl;
    cout<<"\ncuanto de pepsi\n";
    cin>>cuantos;
    producto2=producto2+pepsi*cuantos;
    cout<<"Pepsi: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto2<<endl;
    cout<<"\ncuanto de pecsi\n";
    cin>>cuantos;
    producto2=producto2+pecsi*cuantos;
    cout<<"Pecsi: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto2<<endl;
    cout<<"\ncuanto de leche\n";
    cin>>cuantos;
    producto2=producto2+leche*cuantos;
    cout<<"Leche: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto2<<endl;
    cout<<"\ncuanto de axe\n";
    cin>>cuantos;
    producto2=producto2+axe*cuantos;
    cout<<"Axe: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto2<<endl;
    cout<<"\ncuanto de sabritas\n";
    cin>>cuantos;
    producto2=producto2+sabritas*cuantos;
    cout<<"Sabritas: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto2<<endl;
    cout<<"\ncuanto de carne\n";
    cin>>cuantos;
    producto2=producto2+carne*cuantos;
    cout<<"Carne: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto2<<endl;
    cout<<"\ncuanto de pollo\n";
    cin>>cuantos;
    producto2=producto2+pollo*cuantos;
    cout<<"Pollo: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto2<<endl;
    cout<<"\ncuanto de cafe\n";
    cin>>cuantos;
    producto2=producto2+cafe*cuantos;
    cout<<"Cafe: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto2<<endl;
    cout<<"\ncuanto de koolaid\n";
    cin>>cuantos;
    producto2=producto2+koolaid*cuantos;
    cout<<"Koolaid: "<<"Cantidad: "<<cuantos<<"  Total a pagar hasta ahora: "<<producto2<<endl;
    cout<<"¿desea regresar al menu(s/n)\n";
    cin>>op;
    }while(op=="n");
    cout<<"total a pagar = $"<<producto2<<endl;
    }
    perdida=producto2;
    if(opcion==3){// GANANCIA DE MERCANCIA
    cout<<"\nLa ganancia de hoy fue: $"<<ganancia-perdida<<endl;
    cout<<"\n¿ya termino la venta diaria?(s/n)\n";
    cin>>si;
    if(si=="s"){
    ganancia=0;
    perdida=0;
    }
    }
    if(opcion==4){// MENOS VENDIDOS EN LA ULTIMA  VENTA
        if(sivendidos==0){
            cout<<"\nno se ha realizado ninguna compra\npor favor primero realize una compra\n\n";
            }else{
        cout<<"mas vendidos de la ultima venta: "<<valor<<endl;
    }
    }
        if (opcion==5){// MAS VENDIDOS EN LA ULTIMA COMPRA
            if(sivendidos==0){
                cout<<"\nno se ha realizado ninguna compra\npor favor primero realize una compra\n\n";
        }else{
        cout<<"menos vendidos de la ultima venta: "<<menosven<<endl;
        }
        }
        if(opcion==6){// ADIOS AL PROGRAMA (SALIR DE EL)
            return 0;
        }
        }
        while(opcion<1 || opcion>6){//VERIFICA QUE LA OPCION DEL MENU SEA CORRECTA
            cout<<"selecciona una opcion de la lista\n";
            cin>>opcion;
        }
    }
