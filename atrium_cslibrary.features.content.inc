<?php

/**
 * Implementation of hook_content_default_fields().
 */
function atrium_cslibrary_content_default_fields() {
  $fields = array();

  // Exported field: field_cscrlink
  $fields['cslibrary-field_cscrlink'] = array(
    'field_name' => 'field_cscrlink',
    'type_name' => 'cslibrary',
    'display_settings' => array(
      'weight' => '12',
      'parent' => 'group_csbcr',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'asurl',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'iframe',
    'required' => '0',
    'multiple' => '0',
    'module' => 'iframe',
    'active' => '1',
    'attributes' => array(
      'class' => '',
      'width' => '100%',
      'height' => '700',
      'frameborder' => '0',
      'scrolling' => 'auto',
      'transparency' => '0',
    ),
    'display' => '',
    'url' => 0,
    'title' => 'value',
    'title_value' => '[title]',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
          'attributes' => array(
            'width' => '',
            'height' => '',
            'frameborder' => '0',
            'scrolling' => 'auto',
            'transparency' => '0',
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'CSCR Link',
      'weight' => '12',
      'description' => '',
      'type' => 'iframe',
      'module' => 'iframe',
    ),
  );

  // Exported field: field_cscrupload
  $fields['cslibrary-field_cscrupload'] = array(
    'field_name' => 'field_cscrupload',
    'type_name' => 'cslibrary',
    'display_settings' => array(
      'weight' => '11',
      'parent' => 'group_csbcr',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'zip',
      'file_path' => 'csbcr/[user]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'CSCR Upload',
      'weight' => '11',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_images
  $fields['cslibrary-field_images'] = array(
    'field_name' => 'field_images',
    'type_name' => 'cslibrary',
    'display_settings' => array(
      'weight' => 0,
      'parent' => 'group_images',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'cs_small_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'cs_medium_imagelink',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => 'Include a description of your image here.',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Images',
      'weight' => 0,
      'description' => 'Add an image to your post.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_links
  $fields['cslibrary-field_links'] = array(
    'field_name' => 'field_links',
    'type_name' => 'cslibrary',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => 'group_links',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '1',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Link',
      'weight' => '-1',
      'description' => 'Add links to other web sites.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_referenced_book_page
  $fields['cslibrary-field_referenced_book_page'] = array(
    'field_name' => 'field_referenced_book_page',
    'type_name' => 'cslibrary',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'blog' => 'blog',
      'book' => 'book',
      'casetracker_basic_case' => 'casetracker_basic_case',
      'courseinfo' => 'courseinfo',
      'event' => 'event',
      'csflashcards' => 'csflashcards',
      'csglossary' => 'csglossary',
      'cslibrary' => 'cslibrary',
      'casetracker_basic_project' => 'casetracker_basic_project',
      'readingresponse' => 'readingresponse',
      'status' => 'status',
      'topictheme' => 'topictheme',
      'group' => 0,
      'profile' => 0,
      'shoutbox' => 0,
      'webform' => 0,
      'feed_ical_item' => 0,
      'feed_ical' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_referenced_book_page][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Referenced Page',
      'weight' => '5',
      'description' => 'Type in the title of another post to add a reference.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_videolink
  $fields['cslibrary-field_videolink'] = array(
    'field_name' => 'field_videolink',
    'type_name' => 'cslibrary',
    'display_settings' => array(
      'weight' => '1',
      'parent' => 'group_video',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'video_thumbnail',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '0',
    'multiple' => '1',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video',
      'weight' => '1',
      'description' => '',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('CSCR Link');
  t('CSCR Upload');
  t('Images');
  t('Link');
  t('Referenced Page');
  t('Video');

  return $fields;
}
