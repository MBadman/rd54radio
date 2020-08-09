class CfgPatches
{
	class rb_rd54_radio_fix
    	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]={"40th_bp_cfg"};
		version = "1";
		projectName = "rd54fix";
		author = "bolov1999@mail.ru";
	};
}
  class CfgVehicles{
          class Bag_Base;
	  
          class RD54_6B3: Bag_Base;
		  
          class RD54_6B3_R148: RD54_6B3;
