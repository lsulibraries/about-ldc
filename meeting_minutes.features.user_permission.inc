<?php
/**
 * @file
 * meeting_minutes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function meeting_minutes_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create meeting_minutes content'.
  $permissions['create meeting_minutes content'] = array(
    'name' => 'create meeting_minutes content',
    'roles' => array(
      'LDL Officer' => 'LDL Officer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any meeting_minutes content'.
  $permissions['delete any meeting_minutes content'] = array(
    'name' => 'delete any meeting_minutes content',
    'roles' => array(
      'LDL Officer' => 'LDL Officer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own meeting_minutes content'.
  $permissions['delete own meeting_minutes content'] = array(
    'name' => 'delete own meeting_minutes content',
    'roles' => array(
      'LDL Officer' => 'LDL Officer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any meeting_minutes content'.
  $permissions['edit any meeting_minutes content'] = array(
    'name' => 'edit any meeting_minutes content',
    'roles' => array(
      'LDL Officer' => 'LDL Officer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own meeting_minutes content'.
  $permissions['edit own meeting_minutes content'] = array(
    'name' => 'edit own meeting_minutes content',
    'roles' => array(
      'LDL Officer' => 'LDL Officer',
    ),
    'module' => 'node',
  );

  return $permissions;
}
