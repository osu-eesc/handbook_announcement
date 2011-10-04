<?php

/**
 * Implementation of hook_user_default_roles().
 */
function handbook_announcement_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
  );

  // Exported role: site manager
  $roles['site manager'] = array(
    'name' => 'site manager',
  );

  return $roles;
}
