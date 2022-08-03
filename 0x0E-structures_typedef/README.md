## 0x0E. C - Structures, typedef

#  0. Poppy
![Poppy](https://github.com/Okinbird/Okinbird/blob/49d02281d08daf55fcc1f98601b7923efe91ecfb/Poppy.jpg)

Define a new type struct dog with the following elements:

*  `name`, type = `char *`
*  `age`, type = `float`
*  `owner`, type = `char *

#  1. A dog is the only thing on earth that loves you more than you love yourself

Write a function that initialize a variable of type `struct dog`

*  Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

#  2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
![Dog](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/bb940d2ab10c3a4740f3c154cb980133e65e438e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220803%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220803T132055Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=709b459be67be99324baa412710b87cb80e59b475ec83c2b83fdb61f294e94cd)

Write a function that prints a `struct dog`

*  Prototype: `void print_dog(struct dog *d);`
*  Format: see example bellow
*  You are allowed to use the standard library
*  If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
*  If `d` is `NULL` print nothing.

#  3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

![Dog_t](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/9ef84b3fd1636992602868e45d3062719326de0e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220803%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220803T132055Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=9f2f6551e8a0c8588fe4ee506b792e11923a75e815d15b61532f0d41299e92e9)

Define a new type `dog_t` as a new name for the type `struct dog`.

#  4. A door is what a dog is perpetually on the wrong side of
![NewDog](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/8c1e394774fb8d25e0bbbb73a75ebc7de0c80745.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220803%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220803T132055Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=e5a903d309ce0f85b937a63695126a5ce37847e179bcd796de414a9c716d7e77)

Write a function that creates a new dog.

*  Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
*  You have to store a copy of `name` and `owner`
*  Return `NULL` if the function fails

#  5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
![Freedog](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/683112dbdd805c36a9b366cede0653dd80da5ec3.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220803%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220803T132055Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=f9417175b1f3ca077a46d1843c2a4505907501e4468bba92c1763090b4982251)

Write a function that frees dogs.

*  Prototype: `void free_dog(dog_t *d);`