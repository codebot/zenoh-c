/*
This is just a placeholder to allow the Rust nix library
to have something to link against on older systems.
*/

int memfd_create(const char *unused_name, unsigned int unused_flags)
{
  return -1;
}
