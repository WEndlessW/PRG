//Vytvoří třídu MyClass ve které je public funkce main která přidáa do třídy Animal  nový objekt dog. Poté se ještě aktivuje funkce bark a dog zaštěká.
public class MyClass {
    public static void main (String[] args) {
        Animal dog = new Animal();
        dog.bark();
    }
}
