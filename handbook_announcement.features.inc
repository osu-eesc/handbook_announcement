<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function handbook_announcement_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function handbook_announcement_node_info() {
  $items = array(
    'pnw_announcement' => array(
      'name' => t('Handbook Announcement'),
      'module' => 'features',
      'description' => t('Use for adding an announcement related to a specific page or for a general system announcement listed on the homepage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('A listing of announcements will be displayed on the homepage within the Publish Dates. If a display page is entered, the announcement will be shown at the top of that page.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function handbook_announcement_views_api() {
  return array(
    'api' => '2',
  );
}
