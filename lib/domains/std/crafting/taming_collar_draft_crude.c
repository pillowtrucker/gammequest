inherit TAMING_COLLAR;

// CRAFTING:crude draft taming collar

void setup()
{
   set_adj("crude");
   set_armor_class(2);
   set_taming_level(1);
   set_draft_collar();
}

mapping query_recipe()
{
   return (["skin":({0, 1, 0, 0, 0}), "metal":({5, 0, 0, 0, 0})]);
}
