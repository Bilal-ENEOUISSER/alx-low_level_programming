#include <unistd.h> // Include the necessary header file for the write function

int main(void)
{
  write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59); // Use the write function to write to the standard error (file descriptor 2)
  return (1); // Return 1 to indicate an error condition
}
