# 🔐 Generador de Contraseñas Seguras en C++

Este es un proyecto simple hecho en C++ que genera contraseñas aleatorias seguras, combinando letras mayúsculas, minúsculas, números y símbolos. Fue realizado como práctica de funciones en la materia Programación 1 (UTN General Pacheco).

---

## 💡 ¿Qué hace?

✅ Pide al usuario la longitud deseada (mínimo 8 caracteres)  
✅ Usa caracteres aleatorios para generar una contraseña segura  
✅ Valida que se ingrese una longitud válida  
✅ Muestra el resultado al final

---

## 🧠 ¿Qué aprendí con este proyecto?

- Uso de funciones con retorno (`string`)
- Manejo de strings y ciclos `for`
- Generación de números aleatorios con `rand()` y `srand()`
- Validación de entrada del usuario
- Organización del código en partes reutilizables

---

## 📌 Cómo compilar

Podés compilarlo con cualquier entorno que soporte C++, por ejemplo:

**En Linux / WSL / Git Bash:**
```bash
g++ main.cpp -o contrasena
./contrasena
