//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'http://google.comZ\XZ\XZ\XZ\Z\'", "snapshot=Action_1.inf");
	truclient_step("3", "search (1)", "snapshot=Action_3.inf");
	{
		truclient_step("3.1", "Click on KDSAJFKJHDG combobox", "snapshot=Action_3.1.inf");
		truclient_step("3.2", "Type kek in KDSAJFKJHDG combobox", "snapshot=Action_3.2.inf");
		truclient_step("3.3", "Press key Enter on KDSAJFKJHDG combobox", "snapshot=Action_3.3.inf");
	}

	return 0;
}
