object AdrAbout: TAdrAbout
  Left = 301
  Top = 128
  BorderStyle = bsDialog
  Caption = 'About'
  ClientHeight = 176
  ClientWidth = 292
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = True
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 77
    Top = 16
    Width = 137
    Height = 34
    Caption = 'Addrbook'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlue
    Font.Height = -29
    Font.Name = 'Arial'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
    Transparent = True
  end
  object Label2: TLabel
    Left = 75
    Top = 14
    Width = 137
    Height = 34
    Caption = 'Addrbook'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -29
    Font.Name = 'Arial'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
    Transparent = True
  end
  object Label3: TLabel
    Left = 60
    Top = 61
    Width = 172
    Height = 16
    Caption = 'Orpheus Example Program'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 31
    Top = 85
    Width = 231
    Height = 14
    Caption = 'Copyright '#169' 1995-96 TurboPower Software Co.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -11
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 98
    Top = 102
    Width = 95
    Height = 14
    Caption = 'All Rights Reserved'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -11
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object BitBtn1: TBitBtn
    Left = 111
    Top = 128
    Width = 71
    Height = 33
    DoubleBuffered = True
    Kind = bkOK
    NumGlyphs = 2
    ParentDoubleBuffered = False
    TabOrder = 0
  end
end
