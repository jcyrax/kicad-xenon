/*
 * This program source code file is part of KiCad, a free EDA CAD application.
 *
 * Copyright (C) 2010 Wayne Stambaugh <stambaughw@verizon.net>
 * Copyright (C) 2014 KiCad Developers, see CHANGELOG.TXT for contributors.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you may find one here:
 * http://www.gnu.org/licenses/old-licenses/gpl-2.0.html
 * or you may search the http://www.gnu.org website for the version 2 license,
 * or you may write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 */

#ifndef __dialog_sch_edit_sheet_pin__
#define __dialog_sch_edit_sheet_pin__


/**
 * @file
 * Subclass of DIALOG_SCH_EDIT_SHEET_PIN_BASE, which is generated by wxFormBuilder.
 */


#include <dialog_sch_edit_sheet_pin_base.h>


class DIALOG_SCH_EDIT_SHEET_PIN : public DIALOG_SCH_EDIT_SHEET_PIN_BASE
{
public:
    DIALOG_SCH_EDIT_SHEET_PIN( wxWindow* parent );

    void SetLabelName( const wxString& aName ) { m_textName->SetValue( aName ); }
    wxString GetLabelName() const { return m_textName->GetValue(); }

    void SetTextHeight( const wxString& aHeight ) { m_textHeight->SetValue( aHeight ); }
    wxString GetTextHeight() const { return m_textHeight->GetValue(); }

    void SetTextWidth( const wxString& aWidth ) { m_textWidth->SetValue( aWidth ); }
    wxString GetTextWidth() const { return m_textWidth->GetValue(); }

    void SetConnectionType( int aType ) { m_choiceConnectionType->SetSelection( aType ); }
    int GetConnectionType() const { return m_choiceConnectionType->GetCurrentSelection(); }

    void SetTextHeightUnits( const wxString& aUnit ) { m_staticHeightUnits->SetLabel( aUnit ); }
    void SetTextWidthUnits( const wxString& aUnit ) { m_staticWidthUnits->SetLabel( aUnit ); }
};

#endif // __dialog_sch_edit_sheet_pin__
