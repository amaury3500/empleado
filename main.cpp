#include <iostream>

using namespace std;

class Empleado{
    private:
        int ClaveEmpleado;
        string Nombre;
        string Domicilio;
        float Sueldo;
        std::string ReportaA;
    public:
        Empleado(int clav, string nom, float suel){
            ClaveEmpleado=clav;
            Nombre=nom;
            Domicilio="";
            Sueldo=suel;
            ReportaA="";
        }
        void Imprime(){
            cout<<"\n\n\nClave del empleado:\t"<<ClaveEmpleado<<"\nNombre: \t\t"<<Nombre<<"\nDomicilio: \t\t"<<Domicilio<<"\nSueldo: \t\t"<<Sueldo<<"\nReporta a: \t\t"<<ReportaA;

        }
        void CambiaDomic(string dom){
            Domicilio=dom;
        }
        void CambiaReportaA(string no){
            ReportaA=no;
        }
        void ActualSueldo(float su){
            su = su*Sueldo/100;
            Sueldo = Sueldo+su;
        }
};
int main()
{
    Empleado JefePlanta(1234, "Luis Gonzalez",1000);
    Empleado JefePersonal(4321, "Juan Perez",1000);
    int opc, clave;
    string dom, no;
    float su;
    do{
    cout<<"     MENU\n";
    cout<<"1.-Cambiar domicilio\n";
    cout<<"2.-Actualizar sueldo\n";
    cout<<"3.-Mostrar los datos del empleado\n";
    cout<<"4.-Cambiar nombre de quien reporta\n";
    cout<<"5.-Salir\n";
    cout<<"Elige una opcion: \t";
    cin>>opc;
    cout<<"\n";
    switch(opc){
        case 1:
            cout<<"Ingresa la clave: \t";
            cin>>clave;
            if(clave==1234){
            cout<<"\n\nJefe de Planta\nIngresa el domicilio: \t";
            cin>>dom;
            JefePlanta.CambiaDomic(dom);
            }
            if(clave==4321){
            cout<<"\n\nJefe Personal\nIngresa el domicilio: \t";
            cin>>dom;
            JefePersonal.CambiaDomic(dom);
            }
            break;
        case 2:
            cout<<"Ingresa la clave: \t";
            cin>>clave;
            if(clave==1234){
            cout<<"\n\nJefe de Planta\nIngresa el porcentaje de incremento a su sueldo: ";
            cin>>su;
            JefePlanta.ActualSueldo(su);
            }
            if(clave==4321){
            cout<<"\n\nJefe Personal\nIngresa el porcentaje de incremento a su sueldo";
            cin>>su;
            JefePersonal.ActualSueldo(su);
            }
            break;
        case 3:
            cout<<"Ingresa la clave: \t";
            cin>>clave;
            if(clave==1234){
                cout<<"\n\nJefe de Planta";
                JefePlanta.Imprime();
            }
            if(clave==4321){
                cout<<"\n\nJefe Personal";
                JefePersonal.Imprime();
            }
            break;
        case 4:
            cout<<"Ingresa el nombre de quien reporta: \t";
            cin>>no;
            JefePlanta.CambiaReportaA(no);
            break;
    }
    cout<<"\n\n\n";
    }while(opc!=5);
    return 0;
}
