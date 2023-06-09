/* Do not remove the headers from this file! see /USAGE for more info. */

inherit LIVING;
inherit M_CONVERSATION;

void setup()
{
   set_name("Greeter");
   set_gender(1);
   set_proper_name("Greeter");
   set_in_room_desc("The LIMA mudlib greeter stands here, smiling politely.");
   set_long("The greeter stands here patiently, ready to talk to people with questions about the LIMA mudlib. Use "
            "<talk to greeter> to start a conversation.");

   set_options((["hello":"Hello!",
               "greeter":"What do you do?", "where":"Where do I get LIMA?",
              "problems":"I'm having problems setting up LIMA.",

           "compilation":"Where should I report FluffOS compilation problems?",
              "intermud":"How do I get on intermud (I3)?"]));
   set_responses((["hello":"Hello, and welcome to the LIMA mudlib!  I'm designed to answer some basic questions you "
                           "might have about it.",
                 "greeter":"I help people with basic questions and problems with the LIMA mudlib.  I also demonstrate "
                           "LIMA's M_CONVERSATION " +
                               "module, which makes building NPCs who can hold intelligent conversations a snap!  Feel "
                               "free to read my code, its in " +
                               __FILE__ + ".",
                   "where":"You can find the best current sources for the LIMA mudlib in GitHub on "
                           "https://github.com/fluffos/lima.git (stable) " +
                               "or https://github.com/tsathoqqua/lima.git (development) or see a demo on the Lima "
                               "Rebean mud itself (lima-rebean.themud.org 7878).",
                "problems":"See https://www.fluffos.info/build.html, or get your MUD on the intermud "
                           "network.@@intermud,compilation",

             "compilation":
                 "Problems compiling FluffOS should be reported on Github, https://github.com/fluffos/fluffos/issues",
                "intermud":
                    "First, edit config.h and make sure ADMIN_EMAIL is set correctly.  If it isn't, you will not be "
                    "permitted to connect.  " +
                    "Then do 'update /daemons/imud_d'.  You should be on the net.  You can check with 'mudinfo <your "
                    "mud name>' from here.  Use 'igossip /on' and 'icode /on' to turn on the standard channels."]));

   set_start(({"hello", "greeter", "where", "problems"}));
}
