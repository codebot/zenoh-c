/*
This is just a placeholder to allow the Rust nix library
to have something to link against on older systems.
*/

int memfd_create(const char *, unsigned int)
{
  return -1;
}
