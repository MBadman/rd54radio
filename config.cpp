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
};
  class CfgVehicles{
	   
          class RD54_6B3;
		  
          class RD54_6B3_R148: RD54_6B3{
		  tf_dialog = "mr3000_radio_dialog";
		  tf_range = 20000;
	  };
  };
