object Form1: TForm1
  Left = 195
  Top = 110
  Caption = 'Form1'
  ClientHeight = 212
  ClientWidth = 183
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Default'
  Font.Style = []
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object OvcTable1: TOvcTable
    Left = 17
    Top = 8
    Width = 159
    Height = 195
    Controller = OvcController1
    GridPenSet.NormalGrid.NormalColor = clBtnShadow
    GridPenSet.NormalGrid.Style = psDot
    GridPenSet.NormalGrid.Effect = geBoth
    GridPenSet.LockedGrid.NormalColor = clBtnShadow
    GridPenSet.LockedGrid.Style = psSolid
    GridPenSet.LockedGrid.Effect = ge3D
    GridPenSet.CellWhenFocused.NormalColor = clBlack
    GridPenSet.CellWhenFocused.Style = psSolid
    GridPenSet.CellWhenFocused.Effect = geBoth
    GridPenSet.CellWhenUnfocused.NormalColor = clBlack
    GridPenSet.CellWhenUnfocused.Style = psDash
    GridPenSet.CellWhenUnfocused.Effect = geBoth
    Options = [otoNoRowResizing, otoNoColResizing, otoAlwaysEditing, otoNoSelection]
    ScrollBars = ssVertical
    TabOrder = 0
    OnGetCellData = OvcTable1GetCellData
    CellData = (
      'Form1.TblCB1'
      'Form1.TblCB2'
      'Form1.TblCB3')
    RowData = (
      30
      1
      False
      31)
    ColData = (
      38
      False
      False
      32
      False
      True
      'Form1.TblCB1'
      37
      False
      True
      'Form1.TblCB2'
      31
      False
      True
      'Form1.TblCB3')
  end
  object OvcController1: TOvcController
    EntryCommands.TableList = (
      'Default'
      True
      ()
      'WordStar'
      False
      ()
      'Grid'
      False
      ())
    Epoch = 1900
    Left = 5
    Top = 10
  end
  object TblCB1: TOvcTCCheckBox
    CellGlyphs.IsDefault = True
    CellGlyphs.GlyphCount = 3
    CellGlyphs.ActiveGlyphCount = 2
    Table = OvcTable1
    OnClick = TblCB1Click
    Left = 41
    Top = 10
  end
  object TblCB2: TOvcTCCheckBox
    CellGlyphs.IsDefault = True
    CellGlyphs.GlyphCount = 3
    CellGlyphs.ActiveGlyphCount = 2
    Table = OvcTable1
    Left = 77
    Top = 10
  end
  object TblCB3: TOvcTCCheckBox
    CellGlyphs.IsDefault = True
    CellGlyphs.GlyphCount = 3
    CellGlyphs.ActiveGlyphCount = 2
    Table = OvcTable1
    Left = 113
    Top = 11
  end
end