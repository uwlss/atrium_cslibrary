<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_cslibrary_user_default_permissions() {
  $permissions = array();

  // Exported permission: create cslibrary content
  $permissions['create cslibrary content'] = array(
    'name' => 'create cslibrary content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: delete own cslibrary content
  $permissions['delete own cslibrary content'] = array(
    'name' => 'delete own cslibrary content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit own cslibrary content
  $permissions['edit own cslibrary content'] = array(
    'name' => 'edit own cslibrary content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  return $permissions;
}
