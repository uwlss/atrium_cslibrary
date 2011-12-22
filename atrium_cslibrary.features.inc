<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_cslibrary_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function atrium_cslibrary_node_info() {
  $items = array(
    'cslibrary' => array(
      'name' => t('Library Post'),
      'module' => 'features',
      'description' => t('Share course readings, media, links, and other content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function atrium_cslibrary_views_api() {
  return array(
    'api' => '2',
  );
}
