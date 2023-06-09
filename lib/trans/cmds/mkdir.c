/* Do not remove the headers from this file! see /USAGE for more info. */

//: COMMAND
// USAGE:  mkdir < directory >
//
// This command will create a directory.
//
//
// mkdir /wiz/zifnab/obj
//
// will create a directory named obj in /wiz/zifnab
//
// mkdir obj
//
// will try and create a directory named obj in my current directory

inherit CMD;

private
void main(string *arg)
{
   if (mkdir(arg[0]))
      outf("Ok.\n");
   else
      outf("Failed to make directory: %s\n", arg[0]);
}
