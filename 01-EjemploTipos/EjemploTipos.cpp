/*EjemploTipos
Gustavo Coronel
20220602
*/

#include <cassert>
#include <string>



int main()    
{
//booleanos
    assert(true);
    assert(not false);
//caracteres
    assert('a'!= 'b');
    assert('d'+'q'== 0xD5);
    assert('C'- 'A'==2);
//enteros
    assert(123==123);
    assert(9-5 == 4);
//punto flotante
    assert(0.23 > -1);
    assert(3E2 == 3e2);
    assert(2.0 + 1 == 3.0);
}