import unreal

editor_utility_subsystem = unreal.get_editor_subsystem(unreal.EditorUtilitySubsystem)
editor_utility_object_path = "/VRM4U/Util/System/InitScript.InitScript"

editor_utility_object = unreal.load_asset(editor_utility_object_path)
if editor_utility_object:
    editor_utility_subsystem.try_run(editor_utility_object)
    print(f"VRMMenu Success: {editor_utility_object_path}")
else:
    print(f"VRMMenu Failed: {editor_utility_object_path}")