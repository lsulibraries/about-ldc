<?php
/**
 * @file
 * meeting_minutes.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function meeting_minutes_user_default_roles() {
  $roles = array();

  // Exported role: LDL Officer.
  $roles['LDL Officer'] = array(
    'name' => 'LDL Officer',
    'weight' => 8,
  );

  return $roles;
}
