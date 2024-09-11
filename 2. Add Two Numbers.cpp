/** 2. Add Two Numbers
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
	int suma;
        int acarreo = 0;

        
        ListNode* head = NULL;		//Creamos una nueva lista que será el de nuestra respuesta
        ListNode* last = NULL;		//Un auxiliar que nos dirá cuál es el último en nuestra lista

        while(l1 or l2){		//Mientras 1 de las listas aún tenga nodos (que una sea diferente de NULL)
            
            suma = acarreo;		

            if(l1){			//Si nuestra lista 1 aún tiene nodos
                suma += l1 -> val;	//Sumamos el val de su nodo a la suma
                l1 = l1-> next;		//Avanzamos al siguiente nodo
            }

            if(l2){			//Si nuestra lista 2 aún tiene nodos
                suma += l2 -> val;	//Sumamos el val de su nodo a la suma
                l2 = l2 -> next;	//Avanzamos al siguiente nodo
            }	
             
            if(suma >= 10){		//Si nuestra suma es mayor o igual a 10 extraemos el digito de las unidades con el mod 10
                suma = suma % 10;
                acarreo = 1;		//nuestro acarreo es 1
            }
            else{
                acarreo = 0;
            }

            ListNode* newNode = new ListNode();		//Creamos un nuevo nodo 
            newNode -> val = suma; 			//inicializamos los valores de val y next 
            newNode -> next = NULL;

            if(head == NULL){				//si la lista está vacía
                head = newNode;				//ahora mi head será el nuevo nodo que creamos anteriormente
                last = newNode;				//el último nodo también se inicializa como el primero 
            }
            else{
                last -> next = newNode;			//Si ya hay nodos, entonces hacemos que le último nodo apunte al nuevo nodo
                last = newNode;				//Y actualizamos, ahora el último nodo, es el nuevo nodo que creamos
            }
            
        }

        if(acarreo == 1){				//Si nos queda un último acarreo:
            ListNode* newNode = new ListNode();		//Creamos un nuevo nodo
            newNode -> val = 1; 			//Inicializamos val y next
            newNode -> next = NULL;

            last -> next = newNode;			//el ultimo nodo apunta al nuevo nodo
            last = newNode;				//y el ultimo nodo se actualiza al que es el nuevo nodo
        }

        return head;					//regresamos la respuesta
    }
};