/* bjb-note-tag-dialog.h
 * Copyright (C) Pierre-Yves LUYTEN 2012 <py@luyten.fr>
 * 
 * bijiben is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * bijiben is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _BJB_ORGANIZE_DIALOG_H_
#define _BJB_ORGANIZE_DIALOG_H_

#include <libbiji/libbiji.h>

G_BEGIN_DECLS

#define BJB_TYPE_ORGANIZE_DIALOG             (bjb_organize_dialog_get_type ())
#define BJB_ORGANIZE_DIALOG(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), BJB_TYPE_ORGANIZE_DIALOG, BjbOrganizeDialog))
#define BJB_ORGANIZE_DIALOG_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), BJB_TYPE_ORGANIZE_DIALOG, BjbOrganizeDialogClass))
#define BJB_IS_ORGANIZE_DIALOG(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BJB_TYPE_ORGANIZE_DIALOG))
#define BJB_IS_ORGANIZE_DIALOG_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), BJB_TYPE_ORGANIZE_DIALOG))
#define BJB_ORGANIZE_DIALOG_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), BJB_TYPE_ORGANIZE_DIALOG, BjbOrganizeDialogClass))

typedef struct _BjbOrganizeDialogClass BjbOrganizeDialogClass;
typedef struct _BjbOrganizeDialog BjbOrganizeDialog;
typedef struct _BjbOrganizeDialogPrivate BjbOrganizeDialogPrivate;


struct _BjbOrganizeDialogClass
{
  GtkDialogClass parent_class;
};

struct _BjbOrganizeDialog
{
  GtkDialog parent_instance;

  BjbOrganizeDialogPrivate *priv;
};

GType bjb_organize_dialog_get_type (void) G_GNUC_CONST;

/* Currently only works with one single note
 * the tree view has to be improved to work with several */
void bjb_organize_dialog_new (GtkWindow *parent,
                              GList     *biji_note_obj);

G_END_DECLS

#endif /* _BJB_ORGANIZE_DIALOG_H_ */
